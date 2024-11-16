#include<iostream>
#include<vector>
using namespace std;
#define MAX 100

int main(){
    int n;
    vector<int> a(MAX);
    cout << "No. of elements: ";
    cin >> n;
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