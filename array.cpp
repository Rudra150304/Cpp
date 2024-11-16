#include<iostream>
using namespace std;
int main(){
    int a[100], i, n;
    cout << "Enter no. of terms: ";
    cin >> n;
    for(i=0;i<n;i++){
        cout << "\nEnter term " << i << ": ";
        cin >> a[i];
    }
    cout << "\n";
    for(i=0;i<n;i++){
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}