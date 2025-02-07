#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_map <int, int> map;
    for(int i : a){
        map[i]++;
    }
    for(auto i : map){
        if(i.second == 1){
            cout << "First Unique Value: " << i.first << endl;
        }
    }
    return 0;
}