#include <iostream> 
#include <cmath>
using namespace std;

double f(double x){
    return (x*x)-4;
}
double df(double x){
    return 2*x;
}

int main(){
    double x;
    int steps;
    cout << " enter initial guess : ";
    cin>> x;
    cout << " how many steps : ";
    cin>> steps;

    if (df(x)==0){
        cout << "error: derivation is zero. not possible"<< endl;
        return 0;
    }

    for(int i=1; i<=steps; i++){
        x=x-f(x)/df(x);
        cout<< "step" << i << "guess = " << x << endl;
    }
    cout<< "\n final answer after " << steps << "steps : " << x << endl;
    return 0;
}