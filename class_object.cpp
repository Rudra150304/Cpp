#include<iostream>
using namespace std;

class complex{
    public:
    double re, im;
};
int main(){
    complex ni = {4.2, 5.3};
    cout << ni.re << "\t" << ni.im << endl;
    return 0;
}