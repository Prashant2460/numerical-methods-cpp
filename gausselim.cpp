#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 
int main(){
    int n=3;
    vector<vector<double>> matrix(n, vector<double>(n+1));

    cout << "enter the 3 equations ( a b c d) : "<< endl;
    for (int i =0 ; i<n ; i++){
        for(int j=0; j<n+1 ; j++){
            cin>> matrix[i] [j];
        }
    }
    for ( int i=0; i<n ; i++){
        if(matrix[i] [i]==0){
            cout<< "error zero pivot found"<< endl;
            return 0;
        }
        for(int j= i + 1; j < n; j++) {
            double factor = matrix[j] [i] / matrix[i] [i];
            for (int k = i; k < n + 1; k++) {
                matrix[j] [k] -= factor * matrix[i] [k];
            }
        }
    }

    vector<double> x(n);
    for (int i = n - 1; i >= 0; i--) {
        double sum = 0;
        for (int j = i + 1; j < n; j++) {
            sum += matrix[i] [j] * x[j];
        }
        x[i] = (matrix[i] [n] - sum) / matrix[i] [i];
    }
    cout << "x = " << x[0] << endl;
    cout << "y = " << x[1] << endl;
    cout << "z = " << x[2] << endl;

    return 0;
}