#include<bits/stdc++.h>
using namespace std;
//in this code we will learn what will happen when the base class is public and mode of inheritance is Protected
class Animal{
    public:
        int age;      
};
//now we are going to make the child class
class Dog:protected Animal{
public:
        void print(){
            cout<<this->age;
        }
};
int main(){
   Dog d1;
   d1.print();
   return 0;

}