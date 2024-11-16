#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    string str = "ABCDE";
    stack<char> s;

    for(char ch : str){
        s.push(ch);
    }

    cout << "Reversed String: ";

    while(!s.empty()){
        cout << s.top();
        s.pop();
    }    

    return 0;
}