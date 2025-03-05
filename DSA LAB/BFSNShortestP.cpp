#include <iostream>
using namespace std;

// Function prototypes
void a_init();
void show_origin();
void stat();
void que();
void search_path();
int search();
void show_func();
void show_f_path();

// Global variables
int a[10][10], path, i, j, x = 1, START, END;
char source, destination, start, endNode; // Renamed 'end' to 'endNode'
int status[10];
int queue[10], show[10], f_path[10];
int origin[10];

// Initialize adjacency matrix
void a_init() {
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            a[i][j] = 0;
        }
    }
}

// Show the final path
void show_f_path() {
    cout << "\nPATH   : ";
    char s;
    for (i = 1; f_path[i] != 0; i++) {
        s = f_path[i] + 'A' - 1;
        cout << s;
        if (f_path[i + 1] != 0) {
            cout << " <-- ";
        }
    }
    cout << endl;
}

// Show the origin array
void show_origin() {
    cout << "ORIGIN: ";
    char s;
    for (i = 1; i <= 9; i++) {
        if (origin[i] != 0) {
            s = origin[i] + 'A' - 1;
            cout << s << "  ";
        }
    }
    cout << endl;
}

// Initialize status array
void stat() {
    for (i = 1; i <= 9; i++) {
        status[i] = 1; // Unvisited
    }
}

// Perform BFS traversal
void que() {
    int i = 1, x = 1, z = 1, k, o = 2;
    cout << "\nSTART TRAVERSAL FROM: ";
    cin >> start;

    cout << "\n-----------------------" << endl;
    stat();
    status[start - 'A' + 1] = 2; // Mark start node as visited
    queue[i] = start - 'A' + 1;

    while (queue[i] != 0) {
        int temp = queue[1];
        origin[1] = 0;

        show[x] = temp; // Store visited node
        x++;
        status[temp] = 3; // Mark as processed

        // Shift queue to remove the first element
        for (j = 1; queue[j] != 0; j++) {
            queue[j] = queue[j + 1];
        }

        // Add adjacent nodes to the queue
        for (k = 9; k >= 1; k--) {
            if (a[temp][k] == 1 && status[k] == 1) {
                origin[o] = temp; // Store origin for backtracking
                o++;
                queue[z] = k;
                z++;
                status[k] = 2; // Mark as visited
            }
        }
        z = z - 1; // Adjust queue index
    }
}

// Show the BFS traversal
void show_func() {
    cout << "QUEUE : ";
    char s;
    for (i = 1; i <= 9; i++) {
        if (show[i] != 0) {
            s = show[i] + 'A' - 1;
            cout << s << "  ";
        }
    }
    cout << endl;
}

// Get the start and end nodes
void search_path() {
    cout << "\n\nENTER START AND END\n-----------------------\n";
    cout << "START: ";
    cin >> start;
    cout << "END  : ";
    cin >> endNode; // Updated here

    START = start - 'A' + 1;
    END = endNode - 'A' + 1; // Updated here
}

// Backtracking to find the path
int search() {
    for (i = 1; show[i] != 0; i++) {
        if (END == START) {
            f_path[x] = START;
            return 1;
        } else if (END == show[i]) {
            f_path[x] = show[i];
            x++;
            END = origin[i];
            search();
        }
    }
    return 1;
}

// Main function
int main() {
    a_init();

    cout << "Enter the number of paths: ";
    cin >> path;

    for (i = 1; i <= path; i++) {
        cout << "Enter SOURCE and DESTINATION (as uppercase letters): ";
        cin >> source >> destination;
        a[source - 'A' + 1][destination - 'A' + 1] = 1; // Set adjacency
    }

    cout << endl;

    stat();
    que();
    show_func();

    cout << endl;
    show_origin();

    search_path();
    search();
    show_f_path();

    return 0;
}
