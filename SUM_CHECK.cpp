#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<vector<int>> SUM(vector<int> &a, int target){
    unordered_map <int, int> map;
    vector<vector<int>> ans;
    for(int i = 0; i < a.size(); i++){
        int comp = target - a[i];
        if(map.find(comp) != map.end()){
            ans.push_back({i, map[comp]});
        }
        map[a[i]] = i;
    }
    return ans;
}

int main(){
    vector<int> a;
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    a.resize(n);
    cout << "Enter elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int target;
    cout << "Enter the target element: " << endl;
    cin >> target;
    vector<vector<int>> ans = SUM(a, target);
    if(ans.size() == 0){
        cout << "Sum of no two elements of vector is equals to " << target << "." << endl;
    }
    else{
        cout << "Following pairs add upto the " << target << endl;
        for(auto i : ans){
            cout << "(" << i[0] << "," << i[1] << ")" << endl;
        }
    }
    return 0;
}