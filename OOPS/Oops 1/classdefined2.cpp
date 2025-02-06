#include<bits/stdc++.h>
class Player{
    public:
    int score;
    int health;    
};
using namespace std;
int main(){
    
    Player amit;    //here object ka class is declared
    amit.score = 90;
    amit.health = 100;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;

    Player harsha;
    harsha.score = 100;
    harsha.health = 20;
    cout<<harsha.score<<endl;
    cout<<harsha.health<<endl;

}