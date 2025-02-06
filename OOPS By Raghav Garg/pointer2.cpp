#include<bits/stdc++.h>
using namespace std;
class Pokemon{
public:
    string type;
    int attack;
    Pokemon(string type,int attack){
        // this->type = type;
        // this->attack = attack;

        //line 8and 9 can also be wriiten as
        (*this).type = type;
        (*this).attack = attack;
    }
};
void change(Pokemon* ptr){ //ptr contains address
    // (*ptr).attack = 100;
    // (*ptr).type = "dragon";
    //line 13 and 14 can also be written as
    ptr->attack = 100;
    ptr->type = "Dragon";
}
int main(){
    Pokemon pikachu("Electric",70);
    cout<<pikachu.type<<" "<<pikachu.attack<<endl;
    change(&pikachu);
    cout<<pikachu.type<<" "<<pikachu.attack<<endl;
}