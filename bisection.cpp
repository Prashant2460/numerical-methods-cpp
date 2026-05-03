#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return x*x*x - x - 2; 
}
void bisection(double a, double b, double tol) {
    if (f(a) * f(b) >= 0) {
        cout << "Invalid interval: f(a) and f(b) must have opposite signs." << endl;
        return;
    }

    double c;
    while ((b - a) >= tol) {
        c = (a + b) / 2;
        if (f(c) == 0.0)
            break;

        if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;
    }

    cout << "The root is approximately: " << c << endl;
}
int main() {
    double a = 1, b = 2;   
    double tol = 0.0001;   

    bisection(a, b, tol);

    return 0;
}