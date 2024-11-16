#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 0; i<n; i++){
        sum += i;
    }
    cout << "Sum is " << sum << endl;

    int j = 1, fact = 1;

    while (j <= n)
    {
        fact = fact*j;
        j++;
    }
    
    cout << "Factorial is " << fact << endl;
    return 0;
}