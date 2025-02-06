#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
        int age;
        int weight;

        void eat(){
            cout<<"Eating"<<endl;
        }
        //through the line 4 to 10 we have created the parent class
};
//now we are going to make the child class
class Dog:public Animal{
//we are not writing any code here 
};
int main(){
   Dog d1;
   d1.eat();
   return 0;

}