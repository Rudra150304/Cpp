#include<iostream>
using namespace std;
int main(){
    unsigned char buf[sizeof(int) * 2]; //Buffer on stack
    int *pInt = new(buf) int (3);
    int *qInt = new(buf + sizeof(int)) int (5);
    int *pBuf = (int *)(buf + 0);
    int *qBuf = (int *)(buf + sizeof(int));

    cout << "Buf Addr   Int Addr" << endl;
    cout << pBuf << "\t" << pInt << endl << qBuf << "\t" << qInt << endl;
    cout << "1st Int 2nd Int" << endl;
    cout << *pBuf << "\t\t" << *qBuf << endl;

    int *rInt = new int(7); //heap allocation
    cout << "Heap addr 3rd int" << endl;
    cout << rInt << "\t" << *rInt << endl;
    delete rInt;
    return 0;
}