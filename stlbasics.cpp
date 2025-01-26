#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' for the first or last row, or first/last column of the second row
            if (i == 0 || i == n - 1 || (i == 1 && (j == 0 || j == n - 1))) {
                cout << "*";
            } else {
                cout << " "; // Print spaces for hollow areas
            }
        }
        cout << endl; // Move to the next line
    }
}

int main() {
    int n = 5; // Input size
    printPattern(n);
    return 0;
}
