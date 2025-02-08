#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    //Insertion of map
    unordered_map<string,int>mp;
    mp["Donkey"] = 45;
    mp["Harsha"] = 78;
    mp["Bandariya"] = 12;

    //printing of above inserted pair
    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<mp.size();
    cout<<endl;
    
    //erasing the maping
    mp.erase("Donkey");
    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<mp.size()<<endl;
    
}