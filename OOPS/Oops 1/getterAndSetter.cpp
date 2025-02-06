#include<bits/stdc++.h>
using namespace std;
class Player{
    private:
    int score;
    int health;

    public:
    //setter
    void setScore(int s){
        cout<<"Score set kiya ja rha hai";
        score = s;

    }
    void setHealth(int h){
        cout<<"health set Jiya ja rha hai";
        health = h;

    }
    //getter
    int getScore(){
        
        return score;
    }
    
    int getHealth(){
        return health;
    }

};
int main(){
    Player harsh;
    harsh.setScore(10);
    cout<<harsh.getScore()<<endl;
    harsh.setHealth(50);
    cout<<harsh.getHealth();

}