#include<iostream>
using namespace std;

int main(){
    long long int n, sum=0;
    cin >> n;
    while(n>9){
        sum = 0;
        while(n>0){
            sum = sum + n%10;
            n /= 10;
        }
        cout << sum << endl;
        n = sum;
    }
    return 0;
 }