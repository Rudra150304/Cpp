#include<iostream>
#include<stdlib.h>
using namespace std;

void* operator new(size_t n){
    // Definitionof new
    cout << "Overloaded new" << endl;
    void *ptr;
    ptr = malloc(n);
    return ptr;
}
void operator delete(void *p){
    cout << "Overloaded delete" << endl;
    free(p);
}

int main(){
    int *p = new int;
    *p = 30;
    cout << "The value is: \t" << *p << endl;
    delete p;
    return 0;
}

// The delete message may not be shown in VSC but it's working just fine in online complier.