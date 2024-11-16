#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main(){
    vector<int> a;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    a.resize(n);

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }  
    sort(a.begin(), a.end(), compare);
    // sort(a.begin(), a.begin() + n, compare);

    for(int i = 0; i<n; i++){
        cout << a[i] << "\t";
    }  
    cout << endl;
    return 0;
}