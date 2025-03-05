#include <iostream>
using namespace std;

int a[50], k, i, n, j, loc = 0, minValue = 0; // Renamed 'min' to 'minValue'

void MIN() {
    minValue = a[k];
    loc = k; // Initialize loc with the current index
    for (j = k + 1; j <= n; j++) {
        if (a[j] < minValue) { // Directly comparing a[j] with minValue
            minValue = a[j];
            loc = j; // Set loc to the position of the minimum element
        }
    }
    cout << "\nLOC  : " << loc;
}

void show() {
    for (i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl; // Add newline for better readability
}

int main() {
    int temp;

    cout << "ENTER NUMBER OF ELEMENTS:";
    cin >> n;

    cout << "ELEMENTS:";
    for (k = 1; k <= n; k++) {
        cin >> a[k];
    }

    cout << "\nUNSORTED LIST: ";
    show();

    for (k = 1; k < n; k++) {
        MIN();

        // Swap values at position k and loc
        if (loc != k) { // Only swap if loc is different from k
            temp = a[k];
            a[k] = a[loc];
            a[loc] = temp;
        }

        cout << "\nSORTING: ";
        show();
    }

    cout << "SORTED LIST: ";
    show();

    return 0;
}
