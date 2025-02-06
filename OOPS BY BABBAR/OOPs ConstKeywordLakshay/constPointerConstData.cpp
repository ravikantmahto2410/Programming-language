#include<iostream>
using namespace std;
class abc{
    int x;
    int *y;

public:
    abc(int _x , int _y, int _z = 0){
        x = _x;
        y = new int(_y);
        z = _z;
    }
    int getX() const{  // we are declaring this function as const because if we want to write a function inside which aaapke class ke member variable kabkhi change naa ho, to uss function ko constant declare kar denge
        return x;
    }
    int setX(int val){ // on setter function we dont apply const because here as while setting the value we will need the value to change the value
        x = val;
    }
    int getY() const{
        return *y;
    }
    void setY(int _val){
        *y = _val;
    }
    int getZ() const{
        return z;
    }
};

void printABC(const abc &a){
    cout<<a.getX() <<" "<<a.getY()<<" "<<a.getZ()<<endl;
}
int main (){
    abc a(1,2);
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;
    return 0;    

}