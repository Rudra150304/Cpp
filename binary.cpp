#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a, int b){
    return a < b;
}

int main(){
    int n, key, i;
    vector<int> a;
    cout << "Enter the number of elements: ";
    cin >> n;
    a.resize(n);

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end(), compare);

    cout << "Enter the key element: ";
    cin >> key;

    int left = 0, right = n-1, mid;
    bool found = false;
    while(left <= right){
        mid = (left+right)/2;
        if(key == a[mid]){
            found = true;
            break;
        }
        else if(key > a[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }

    if(!found){
        cout << key << " Not found in array" << endl;
    }
    else{
        cout << key << " Found at index: " << mid;
    }
    return 0;
}