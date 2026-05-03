#include <iostream>

using namespace std;

int main() {
    double a1, b1, c1, d1;
    double a2, b2, c2, d2;
    double a3, b3, c3, d3;

    double x = 0, y = 0, z = 0;
    int steps;

    cout << "Enter Eq 1 (a b c d): ";
    cin >> a1 >> b1 >> c1 >> d1;

    cout << "Enter Eq 2 (a b c d): ";
    cin >> a2 >> b2 >> c2 >> d2;

    cout << "Enter Eq 3 (a b c d): ";
    cin >> a3 >> b3 >> c3 >> d3;

    cout << "Enter number of steps: ";
    cin >> steps;

    cout << "\nStep\t\tx\t\ty\t\tz" << endl;
    cout << "----------------------------------------" << endl;

    for (int k = 1; k <= steps; k++) {
        if (a1 == 0 || b2 == 0 || c3 == 0) {
            cout << "Error: Division by zero." << endl;
            return 0;
        }

        // Gauss-Seidel: Use new x immediately for y, and new x,y for z
        x = (d1 - b1 * y - c1 * z) / a1;
        y = (d2 - a2 * x - c2 * z) / b2;
        z = (d3 - a3 * x - b3 * y) / c3;

        cout << k << "\t\t" << x << "\t" << y << "\t" << z << endl;
    }

    cout << "\nFinal Answers:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}