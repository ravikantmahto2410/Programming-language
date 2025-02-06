#include<bits/stdc++.h>
using namespace std;
class Animal{
    protected:
    int age;
};

class Dog:public Animal{
    public:
    void print(){
        cout<<this->age;
    }
};
int main(){
    Dog d1;
    d1.print();              //accessing the inside
    return 0;
}