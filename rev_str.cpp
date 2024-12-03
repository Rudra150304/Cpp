#include<iostream>
using namespace std;

class Stack{
    public:
    char data[100];
    int top;

    bool empty(){
        return (top == -1);
    }
    char Top(){
        return data[top];
    }
    void push (char x){
        data[++top] = x;
    }
    void pop(){
        --top;
    }
};

int main(){
    Stack s;
    s.top = -1;
    char str[10] = "ABCDE";
    int i;
    for(i=0; i< 5; i++){
        s.push(str[i]);
    }
    cout << "Reversed: ";
    while(!s.empty()){
        cout << s.Top();
        s.pop();
    }
    return 0;
}