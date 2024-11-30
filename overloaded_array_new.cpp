#include<iostream>
#include<cstdlib>
#include <cstring>

using namespace std;


void* operator new[] (size_t os, char setv){
    void *t = operator new(os);
    memset(t, setv, os);
    return t;
}

void operator delete[] (void *ss){
    cout << endl << "Overloaded Delete" << endl;
    operator delete(ss);
}

int main(){
    char *t = new('#') char[10];
    cout << "p = " << (int) (t) << endl;
    for(int i=0; i<10; i++){
        cout << t[i];
    }
    delete [] t;
    return 0;
}