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
int main(){
    
    int score[100] = {};
    int health[100] = {};
    Player amit;    //here object ka class is declared
    amit.score = 90;
    amit.health = 100;
    amit.showHealth();
    amit.showScore();
    

}