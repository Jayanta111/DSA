#include <iostream>
#include <iomanip>
using namespace std;

const int INF = 1000000; // A large value to represent infinity

int main() {
    int A[4][4] = {0};   // Adjacency matrix
    int P0[4][4];        // Initial distance matrix
    int P1[4][4] = {0};  // Intermediate distance matrix
    int n, source, destination, weight;

    // Input number of edges
    cout << "Enter the number of edges: ";
    cin >> n;

    // Input edges and their weights
    for (int i = 0; i < n; i++) {
        cout << "Enter source, destination, and weight: ";
        cin >> source >> destination >> weight;
        A[source][destination] = weight;
    }

    // Initialize P0 matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                P0[i][j] = 0; // Distance to self is 0
            } else if (A[i][j] == 0) {
                P0[i][j] = INF; // No direct edge, set to INF
            } else {
                P0[i][j] = A[i][j]; // Use edge weight
            }
        }
    }

    // Display initial P0 matrix
    cout << "\nP0 matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(8) << (P0[i][j] == INF ? "INF" : to_string(P0[i][j]));
        }
        cout << endl;
    }

    // Floyd-Warshall Algorithm
    for (int k = 0; k < 4; k++) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (P0[i][k] != INF && P0[k][j] != INF) {
                    P1[i][j] = min(P0[i][j], P0[i][k] + P0[k][j]);
                } else {
                    P1[i][j] = P0[i][j];
                }
            }
        }

        // Display intermediate Pk matrix
        cout << "\nMATRIX P" << k + 1 << ":\n";
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << setw(8) << (P1[i][j] == INF ? "INF" : to_string(P1[i][j]));
            }
            cout << endl;
        }

        // Update P0 for the next iteration
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                P0[i][j] = P1[i][j];
            }
        }
    }

    return 0;
}
