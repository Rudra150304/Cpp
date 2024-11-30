#include<iostream>
using namespace std;
int main(){
    // int *p = new int(5);
    // int *p = (int *)operator new(sizeof(int));
    // *p = 5;
    // cout << *p;
    // operator delete(p);
    int *a = new int[3];
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    for(int i=0; i<3; i++){
        cout <<  a[i] << "\t";
    }
    return 0;
}