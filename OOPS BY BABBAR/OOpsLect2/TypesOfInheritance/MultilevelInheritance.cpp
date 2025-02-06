#include<bits/stdc++.h>
using namespace std;

class Fruit{
    public:
    string name;
};

class Mango:public Fruit{
    public:
    int weight;

};

class Alphanso:public Mango{
    public:
    int sugarLevel;
};
int main(){
    Alphanso a;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugarLevel; // we can access all three properties for alphanso
}
    
