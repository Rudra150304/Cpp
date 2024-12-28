#include<iostream>
#include<string>
using namespace std;

class student{
    int rno;
    string name;
    double fee;
    public:
        student()
        {
            // Constructor within class
            cout << "Enter the roll number: ";
            cin >> rno;
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter the fee: ";
            cin >> fee;
        }
        void display(){
            cout << endl << rno << "\t" << name << "\t" << fee;
        }
};

// student::student(){
//     // Constructor outside class
//     cout << "Enter the roll number: ";
//     cin >> rno;
//     cout << "Enter the name: ";
//     cin >> name;
//     cout << "Enter the fee: ";
//     cin >> fee;
// }

int main(){
    student s;
    s.display();
    return 0;
}