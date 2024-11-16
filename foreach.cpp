#include<iostream>
using namespace std;
int main(){
    string students[] = {"Spongebob", "Patrick", "Squidward"};
    for(string student : students){
        cout << student;
    }
    return 0;
}