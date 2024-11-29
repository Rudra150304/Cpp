#include<iostream>
#include<cstring>
using namespace std;

typedef struct _String
{
    char *str;
} STRING;

STRING operator+ (const STRING& S1, const STRING& S2){
    STRING s;
    s.str = (char *)malloc(strlen(S1.str) + strlen(S2.str) + 1);
    strcpy(s.str, S1.str);
    strcat(s.str, S2.str);
    return s;
}


int main(){
    STRING fName, lName, name;
    fName.str = strdup("Rudra");
    lName.str = strdup("Pratap Singh");

    name = fName + lName;

    cout << "First Name: " << fName.str << endl;
    cout << "Last Name: " << lName.str << endl;
    cout << "Full Name: " << name.str << endl;

    return 0;
}