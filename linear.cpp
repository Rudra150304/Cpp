#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    int i,n,key, x=1;
    cout << "Enter the no. of elements: ";
    cin >> n;
    cout << "Elements: ";
    a.resize(n);
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Enter the element for searching";
    cin >> key;
    for(i=0; i<n; i++){
        if(key == a[i]){
            x = 1;
            break;
        }
        else{
            x = 0;
        }
    }
    if(x == 1){
        cout << key  << " Avalaiable at index " << i << endl;
    }
    else{
        cout << key << "Not found in the array";
    }
    return 0;
}