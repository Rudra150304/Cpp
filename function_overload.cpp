#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

double add(double c, double d){
    return c+d;
}

int area(int a, int b){
    return a*b;
}

int area(int c){
    return c*c;
}

int main(){
    int z = add(5,7);
    double w = add(5.2,7.3);
    cout << "z = " << z << endl;
    cout << "w = " << w << endl;
    int ar1 = area(5,6);
    int ar2 = area(7);
    cout << "ar1 = " << ar1 <<endl;  
    cout << "ar2 = " << ar2 <<endl;  
    return 0;
}