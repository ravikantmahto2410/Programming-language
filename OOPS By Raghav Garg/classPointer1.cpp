#include<bits/stdc++.h>
using namespace std;
class Pokemon{
public:
    string type;
    int attack;
    Pokemon(string type,int attack){
        // type = type;
        // attack = attack;
        //line8-and line 9 will make compiler confuse so it will give some unwanted value to avoid this we use This keyword
        this->type = type;
        this->attack = attack;
    }    
};
int main(){
    Pokemon pikachu("electric",70);
    cout<<pikachu.type<<" "<<pikachu.attack<<endl;
    Pokemon charizard ("fire",120);
    cout<<charizard.type<<" "<<charizard.attack<<endl;
    
}