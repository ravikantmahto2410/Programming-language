#include<bits/stdc++.h>
using namespace std;
//Dynamic Memory
class Animal{ 
     //creation of class 
     //state or properties

private:
     int weight;
public:
     int age;
     string type;

     // default constructor or constructor
     Animal(){
        cout<<"constructor called"<<endl;
     }
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
     int setWeight(int weight){//this is setter which will work  to set the weight 
       this-> weight = weight;// here before adding the this->weight  = weight like weight = weight , we could not differentiate which weight we are talking about so after adding this ,weight just after the arrow weight  represents the object and the weight after the equal to sign represents the parameter that is being passed
     }                        //
};
int main(){
    // //object creation

    // //static allocation

    // Animal  ramesh; //Creation of object //animal type ka object hai jiska naam ramesh hai
    // ramesh.age = 12;//to access the age of ramesh or we can say we can access the object of the class
    // ramesh.type = "Lion";
    // cout<<"Age of ramesh is : "<<ramesh.age<<endl;
    // cout<<"type of ramesh is : "<<ramesh.type<<endl;
    
    
    // // ramesh.eat();
    // // ramesh.sleep();

    // // to access the private members we use getter and setter
    // ramesh.setWeight(101);
    // cout<<"Weight : "<<ramesh.getWeight()<<endl;
    // //dynamic allocation
    // return 0;

    //dynamic memory
    Animal*suresh = new Animal;//whenever we will create a object constructor gets called bydefault
    (*suresh).age = 15;
    (*suresh).type = "billi";

    //alternate for allocating the dynamic memory
    suresh->age = 17;
    suresh->type="baby";

    suresh->eat();
    suresh->sleep();
}


    

