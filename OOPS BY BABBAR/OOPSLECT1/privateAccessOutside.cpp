#include<bits/stdc++.h>
using namespace std;

class Animal{ 
     //creation of class 
     //state or properties

private:
     int weight;
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
     int getWeight(){// this is the getter which will help in to fetch the weight
        return weight;
     }
     int setWeight(int w){//this is setter which will work  to set the weight 
        weight = w;
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

    // to access the private members we use getter and setter
    ramesh.setWeight(101);
    cout<<"Weight : "<<ramesh.getWeight()<<endl;
    //dynamic allocation
    return 0;
}