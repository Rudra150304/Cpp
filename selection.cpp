#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    int n;
    cout << "Enter the elements: ";
    cin >> n;
    a.resize(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min = j; 
            }
        }
        if(min != i){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    cout << "Sorted Array:\n";
    for(int i=0; i<n; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}