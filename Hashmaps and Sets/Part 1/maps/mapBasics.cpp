#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    //Insertion of map
    unordered_map<string,int>mp;
    pair<string,int>p1;
    p1.first = "raghav";
    p1.second = 76;
    pair<string,int>p2;
    p2.first = "Bandariya";
    p2.second = 22;
    pair<string,int>p3;
    p3.first = "Nayan";
    p3.second = 56;

    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);
    

   
}