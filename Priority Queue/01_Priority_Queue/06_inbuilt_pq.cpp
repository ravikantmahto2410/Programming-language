#include<bits/stdc++.h>
using namespace std;
int main(){
    //default priority queue implementation in c++  , that uses MaxHeap
    
    // priority_queue<int>hp;
    // hp.push(3);
    // hp.push(4);
    // hp.push(11);
    // hp.push(9);
    // hp.push(14);
    // hp.push(-1);
    // hp.push(30);
    // hp.push(44);
    // hp.push(50);
    
    // cout<<hp.top()<<endl;




    //To make default  implementation MinHeap 
    priority_queue<int, vector<int>, greater<int>> hp;//greater<int> kya karta hai ki if there are two values a and b then it checks a > b
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    
    cout<<hp.top()<<endl;


}