#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x;

    cout << "Input a number ";
    cin >> x;

    double sqrt_x = sqrt(x);

    cout << "Square root of " << x << " is "
        << sqrt_x << endl;
    
    return 0;
}