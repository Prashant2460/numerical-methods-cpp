#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
    return (x*x)-4;
}
int main(){
    double a,b,c;
    int steps;

    cout << "enter start point a :";
    cin>> a;
    cout << "enter end value : ";
    cin >> b;
    cout<< "how many iteration : ";
    cin>> steps;

    if(f(a)*f(b)>=0){
        cout<<"error: start and end value must have opposite sign."<< endl;
        return 0;
    }
    for(int i = 1; i<=steps; i++){
        c= (a*f(b)-b*f(a))/(f(b)-f(a));

        cout << "step" << i << ": guess = "<< c<< endl;
        if ( f(c)*f(a) < 0){
            b=c;
        }
        else{
            a=c;
        }
    }
    cout << "\n final answer after " << steps << "steps: " << c<< endl;
    return 0;
}
