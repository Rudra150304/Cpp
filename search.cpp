#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a, int b){
    return a < b;
}

int main(){
    vector<int> a;
    int n, key;
    cout << "Enter the numbers of elements: ";
    cin >> n;
    a.resize(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), compare);

    cout << "Enter the key element: ";
    cin >> key;

    if(binary_search(a.begin(), a.end(), key))
        cout << "FOUND!" << endl;
    else
        cout << "NOT FOUND!" << endl;

    return 0;
}