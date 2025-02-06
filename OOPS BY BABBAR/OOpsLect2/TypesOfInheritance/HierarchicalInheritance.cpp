#include<bits/stdc++.h>
using namespace std;
// this is the example of Hierarchical Inheritance
class car{
    public:
    int age;
    int weight;
    string name;

    void speedUp(){
        cout<<"speedUp"<<endl;
    }
};

class Scorpio:public car{

};
class fortuner:public car{

};
int main(){
    Scorpio S11;
    S11.speedUp();

    fortuner f11;
    f11.speedUp();
    return 0;
}