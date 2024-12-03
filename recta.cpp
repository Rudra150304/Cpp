#include<iostream>
using namespace std;

class Point{
    public:
    int x;
    int y;
};

class Rect {
    public:
    Point TL;
    Point BR;

    void area(){
        cout << abs(TL.x - BR.x) * abs(BR.y - TL.y);
    }
};

int main(){
    Rect r = {{0,2}, {5,7}};
    r.area();
    return 0;
}

