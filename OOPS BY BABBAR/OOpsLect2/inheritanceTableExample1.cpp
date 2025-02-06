#include<bits/stdc++.h>
using namespace std;
//in this code we will learn what will happen when the base class is public and mode of inheritance is also public
class Animal{
    public:
        int age;      
};
//now we are going to make the child class
class Dog:public Animal{
//we are not writing any code here 
};
int main(){
   Dog d1;
   cout<<d1.age;
   return 0;

}