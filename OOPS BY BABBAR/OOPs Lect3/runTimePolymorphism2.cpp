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
        cout<<"barking ";
    }
};
int main(){
    // Animal a; // Animal class ek object bana diya 
    // a.speak();

    // Animal*a = new Animal();//Animal type ka object banaya hai and speak method call kiya hai
    // a->speak(); 
    // Dog* a = new Dog();// Dog type ka object banaya and dog ka speak method call kar diya , to  bark print hoga
    // a->speak();
    
    //this below line from 26-27 is called Upcasting
    Animal*a = new Dog(); // pointer Animal class ka hai and object dog type ka banaya hai
     a->speak();   
    
    return 0;

    
}