#include<bits/stdc++.h>
using namespace  std;
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;

    }
};
class Dog:public Animal{
    public:
    //override
    void speak(){
        cout<<"bark ";
    }
};
int main(){
    Animal a; // Animal class ek object bana diya 
    a.speak();
    return 0;

}