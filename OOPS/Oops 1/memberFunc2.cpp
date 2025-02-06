#include<bits/stdc++.h>
using namespace std;
class Player{
    public:
    int score;
    int health; 
    void showHealth(){
        cout<<"Health is : "<<health<<endl;
    }  
    void showScore(){
        cout<<"Score : "<<score;
    } 
};
class calculator{
    public:
    int a;
    int b;

    void add(){
        cout<<a+b<<endl;

    }
    void subtract(){
        cout<<a-b;
    }
};
int main(){
    
    

    calculator calci;
    calci.a = 10;
    calci.b = 7;
    calci.add();
    calci.subtract();
    

}