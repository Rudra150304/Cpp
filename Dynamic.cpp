#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> a;
    a.resize(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "\nElements:\n";
    for(int i=0; i<n; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}