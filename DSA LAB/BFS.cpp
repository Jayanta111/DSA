#include <iostream>
using namespace std;

// Function prototypes
void a_init();
void stat();
void que();
void show_func();

// Global variables
int a[10][10], path, i, j;
char source, destination;
int status[10];
int queue[10], show[10];

// Initialize adjacency matrix
void a_init() {
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            a[i][j] = 0;
        }
    }
}

// BFS Status array initialization
void stat() {
    for (i = 1; i <= 9; i++) {
        status[i] = 1; // All nodes unvisited initially
    }
}

// Breadth-First Search implementation
void que() {
    int i = 1, x = 1, z = 1, k;
    char start;

    cout << endl;
    cout << "START TRAVERSAL FROM: ";
    cin >> start;

    // Initialize BFS
    stat();
    status[start - 'A' + 1] = 2; // Mark start node as visited
    cout << endl;

    queue[i] = start - 'A' + 1;

    while (queue[i] != 0) {
        int temp = queue[1];
        show[x] = temp; // Store visited node
        x++;
        status[temp] = 3; // Mark as processed

        // Shift queue to remove the first element
        for (j = 1; queue[j] != 0; j++) {
            queue[j] = queue[j + 1];
        }

        // Add adjacent nodes to the queue
        for (k = 1; k <= 9; k++) {
            if (a[temp][k] == 1 && status[k] == 1) {
                queue[z] = k;
                z++;
                status[k] = 2; // Mark as visited
            }
        }

        z = z - 1; // Adjust queue index
    }
}

// Display BFS traversal
void show_func() {
    cout << "BREADTH FIRST TRAVERSAL: ";
    char s;
    for (i = 1; i <= 9; i++) {
        if (show[i] != 0) {
            s = show[i] + 'A' - 1;
            cout << s << "  ";
        }
    }
    cout << endl;
}

int main() {
    a_init();

    cout << "Enter the number of paths: ";
    cin >> path;

    for (i = 1; i <= path; i++) {
        cout << "Enter SOURCE and DESTINATION (as uppercase letters): ";
        cin >> source >> destination;
        a[source - 'A' + 1][destination - 'A' + 1] = 1;
    }

    cout << endl;
    cout << "ADJACENCY MATRIX:\n";
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    que();
    show_func();

    return 0;
}
