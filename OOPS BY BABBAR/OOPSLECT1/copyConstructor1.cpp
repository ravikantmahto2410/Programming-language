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
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout<<"constructor called"<<endl;
     }

     //parameterised constructor
      Animal(int age){       
         this->age = 0;
         cout<<"parameterised Constructor called "<<endl;
      }
      
      Animal(int age, int weight){
         this->age = age;
         this->weight = weight;
         cout<<"Parameterised Constructor 2 called"<<endl;
      }

      Animal(int age, int weight, string type){
         this->age = age;
         this->weight = weight;
         this->type = "";
         cout<<"Parameterised Constructor 3 is called"<<endl;
      }
      //copy Constructor
       Animal(Animal &obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;
        cout<<"I am inside copy Constructor"<<endl;
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
    Animal a(10);//after passing a value from this parenthesis we get 
    Animal*b = new Animal(100,10,"Babbar");//before adding any value inside the parenthesis there is no parameterised constructor is visible , but after passing a value from this integer  we get parameterised constructor
    

    //object Copy
    Animal c = a;// aise bhi kar sakte ho copy objetcs ko 
    Animal animal1(c); // aur aise bhi kar sakte ho copy objects ko
    return 0;
}