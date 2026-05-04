#include <iostream>

using namespace std;

double f(double x) {
    return (x * x * x) - x - 2;
}

int main() {
    double a, b;
    int steps;

    cout << "Enter start point (a): ";
    cin >> a;
    cout << "Enter end point (b): ";
    cin >> b;
    cout << "Enter number of steps: ";
    cin >> steps;

    if (f(a) * f(b) >= 0) {
        cout << "Error: f(a) and f(b) must have opposite signs." << endl;
        return 0;
    }

    double c;
    cout << "\nStep\t a\t\t b\t\t c\t\t f(c)" << endl;
    cout << "---------" << endl;

    for (int i = 1; i <= steps; i++) {
        c = (a + b) / 2;

        cout << i << "\t " << a << "\t " << b << "\t " << c << "\t " << f(c) << endl;

        if (f(c) == 0) {
            cout << "\nExact root found: " << c << endl;
            return 0;
        }

        if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    cout << "\nApproximate root after " << steps << " steps: " << c << endl;

    return 0;
}