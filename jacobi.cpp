#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    double a1,b1,c1,d1;
    double a2,b2,c2,d2;
    double a3,b3,c3,d3;

    double x=0,y=0,z=0;
    double x1,y1,z1;
    int steps;

    cout << "Enter coefficients for Eq 1 (a b c d): ";
    cin >> a1 >> b1 >> c1 >> d1;

    cout << "Enter coefficients for Eq 2 (a b c d): ";
    cin >> a2 >> b2 >> c2 >> d2;

    cout << "Enter coefficients for Eq 3 (a b c d): ";
    cin >> a3 >> b3 >> c3 >> d3;

    cout << "Enter number of steps (iterations): ";
    cin >> steps;

    for(int i=1; i<=steps; i++){
        if(a1==0||b2==0||c3==0){
            cout<< "error: diagonal element is zero. cannot divide"<< endl;
            return 0;
        }
        x1=(d1-b1*y-c1*z)/a1;
        y1=(d2-a2*x-c2*z)/b2;
        z1=(d3-a3*x-b3*y)/c3;

        cout<< i << " \n" << x1 << "\n" << y1 << "\n" << z1  << endl;

        x=x1;
        y=y1;
        z=z1;
    }
    cout << "final answers : "<< endl;
    cout << " x= " << x << endl;
    cout << " y= " << y << endl;
    cout << " z= " << z << endl;

    return 0;
}