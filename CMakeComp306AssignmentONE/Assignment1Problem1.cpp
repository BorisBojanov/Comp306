// CMakeComp306AssignmentONE.cpp : Defines the entry point for the application.

#include "Assignment1Problem1.h"
using namespace std;

void MultiplicationTable() {
    int i, j; // Declare loop variables

    // Print top row (header)
    cout << setw(5) << " :)"; // Top-left empty corner
    for (j = 1; j <= 12; j++) {
        cout << setw(4) << j << "|"; // Print header row (1 to 12)
    }
    cout << endl;

    // Print each row with row label and multiplication products
    for (i = 1; i <= 12; i++) {
        cout << setw(4) << i << "|"; // Print left column (row labels)

        for (j = 1; j <= 12; j++) {
            cout << setw(4) << i * j << "|"; // Print multiplication result
        }
        cout << endl;
    }
}

int main() {
    MultiplicationTable();
    return 0;
}
