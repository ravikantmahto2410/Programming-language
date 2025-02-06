#include<bits/stdc++.h>
using namespace std;

class Player{
private:
    int health;
    int age;
    int score;
    int alive;

public:
    int getHealth(){
        return health;

    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score ;
    }
    int isAlive(){
        return alive;
    }
    void setHealth(int Health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;

    }
    void setIsAlive (bool alive){
       this->alive = alive;
    }

};

int addScore(Player a, Player b){
    return a.getScore() + b.getScore();
}
Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore() > b.getScore()){
        return a;

    }
    else return b;
}
int main(){
    Player harsh;//object creationn , statically
    Player raghav;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    raghav.setAge(21);
    raghav.setScore(100);
    raghav.setIsAlive(true);
    raghav.setHealth(100);

    cout<<addScore(harsh, raghav)<<endl;
    Player sanket = getMaxScorePlayer (harsh, raghav);
    cout<<sanket.getScore();
}