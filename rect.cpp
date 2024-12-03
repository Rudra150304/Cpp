#include<iostream>
using namespace std;

class point{
    public:
    int x;
    int y;
};

class Rect{
    public:
    point TL;
    point BR;
};

int main(){
    Rect r = {{0,2}, {5,7}};
    cout << "[(" << r.TL.x << "\t" << r.TL.y << ") (" << r.BR.x << "\t" << r.BR.y << ")]" << endl;
    return 0;
}