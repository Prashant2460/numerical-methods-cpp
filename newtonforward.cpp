#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

    double x[n], y[n];
    cout << "Enter x and y values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Point " << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }

    double x_val;
    cout << "Enter the x value to interpolate: ";
    cin >> x_val;

    // Forward Difference Table
    double table[n] [n];
    for (int i = 0; i < n; i++) {
        table[i][0] = y[i];
    }

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            table[i] [j] = table[i + 1] [j - 1] - table[i] [j - 1];
        }
    }

    // Calculate p
    double h = x[1] - x[0];
    double p = (x_val - x[0]) / h;

    // Newton's Forward Formula
    double result = table[0][0];
    double fact = 1.0;

    for (int i = 1; i < n; i++) {
        fact *= (double)i;
        double term = table[0][i];
        double factor = 1.0;

        for (int k = 0; k < i; k++) {
            factor *= (p - k);
        }

        result += (term / fact) * factor;
    }

    cout << "\nInterpolated value at x = " << x_val << " is: " << result << endl;

    return 0;
}