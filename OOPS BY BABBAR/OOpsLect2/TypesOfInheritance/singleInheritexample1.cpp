#include<bits/stdc++.h>
using namespace std;

// this is the pure Example of single Level Inheritance
class car{
    public:
    string name;
    int weight;
    int age;
    
    void speedUp(){
        cout<<"Speeding Up"<<endl;
    }
    void breakMarro(){
        cout<<"Break Maardi" <<endl;
    }
};
class Scorpio:public car{

};
int main(){
    Scorpio mereWali; //scorpio type ka object banaya
    mereWali.speedUp();
    return 0;

}