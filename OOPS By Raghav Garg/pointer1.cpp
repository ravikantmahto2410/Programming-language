#include<bits/stdc++.h>
using namespace std;
class Pokemon{
public:
    string type;
    int attack;
    Pokemon(string type,int attack){
        this->type = type;
        this->attack = attack;
    }
};
void change(Pokemon pikachu){
    pikachu.attack = 100;
    pikachu.type = "dragon";
}
int main(){
    Pokemon pikachu("Electric",70);
    cout<<pikachu.type<<" "<<pikachu.attack<<endl;
    change(pikachu);
    cout<<pikachu.type<<" "<<pikachu.attack<<endl;
}