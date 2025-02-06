#include<bits/stdc++.h>
using namespace std;
class Pokemon{
private:
    int attack;
public:
    string type;
    void set(int val){  //setter
        attack = val;
    }
    int get(){ //getter to print 
        return attack;
    }
};

int main(){
    Pokemon pikachu;
    pikachu.type = "Electric";
    cout<<pikachu.type<<endl;
    pikachu.set(70);
    cout<<pikachu.get();
}