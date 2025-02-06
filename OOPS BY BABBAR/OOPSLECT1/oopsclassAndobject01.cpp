#include<bits/stdc++.h>
using namespace std;

class Animal{ 
     //creation of class 
     //state or properties
public:
     int age;
     string type;
     //behaviour
     void eat(){
        cout<<"Eating" <<endl;
     }
     void sleep(){
        cout<<"Sleeping"<<endl;
     }
};
int main(){
    //object creation

    //static allocation

    Animal  ramesh; //Creation of object //animal type ka object hai jiska naam ramesh hai
    ramesh.age = 12;//to access the age of ramesh or we can say we can access the object of the class
    ramesh.type = "Lion";
    cout<<"Age of ramesh is : "<<ramesh.age<<endl;
    cout<<"type of ramesh is : "<<ramesh.type<<endl;
    
    ramesh.eat();
    ramesh.sleep();
    //dynamic allocation
    return 0;
}