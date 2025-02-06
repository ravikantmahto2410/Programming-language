#include<bits/stdc++.h>
using namespace std;

class abc{
    public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)){}  // initialisation list
    
    // // Default Dumb copy Constructor
    // abc(const abc &obj){
    //     x = obj.x;
    //     y = obj.y;
    // }

    // Our Smart DEEP COPY
    abc(const abc &obj){
        x = obj.x;
        y = new int (*obj.y);
    }

    void print() const{
        printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n", x,y,*y);
    }
};
int main(){
    abc a(1,2);
    a.print();

    //abc b(a);
    abc b = a;  // call hota hai copy constructor
    cout<<"Print int a"<<endl;
    b.print();
    *b.y = 20;
    cout<<"Print int b"<<endl;
    b.print();

    cout<<"Print int a"<<endl;
    a.print();
    return 0;


}