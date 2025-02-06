#include<bits/stdc++.h>
using namespace std;
class Animal{
    protected:
    int age;
};

class Dog:private Animal{
    public:
    void print(){
        cout<<this->age;
    }
};
int main(){
    Dog d1;
    // d1.age;              //accessing the outside ,  not allowed
    d1.print();  // accesssing the d1 inside the class , Yes It  is allowed
    return 0;
}