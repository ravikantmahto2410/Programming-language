#include<bits/stdc++.h>
using namespace std;

// This code is correct for this solution , I tried to solve by Myself but I have taken a Extra Stack
void reverse(queue<int>&elem,int k){
    stack<int>helper1;
    stack<int>helper2;

    int m = elem.size();
    for(int i=0;i<m;i++){
        
        int x = elem.front();
        elem.pop();
        helper1.push(x);
    }
    while(helper1.size()>0){
        if(helper1.size()>k){
            int z = helper1.top();
            helper1.pop();
            helper2.push(z);
        }
        else{
            int q = helper1.top();
            helper1.pop();
            elem.push(q);
        }
    }
    while(helper2.size()>0){
        int x = helper2.top();
        helper2.pop();
        elem.push(x);
    }
}

void display(queue<int>&elem){
    int n = elem.size();
    for(int i=1;i<=n;i++){
        int x = elem.front();
        cout<<x<<" ";
        elem.pop();
        elem.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int>elem;
    elem.push(1);
    elem.push(2);
    elem.push(3);
    elem.push(4);
    elem.push(5);
    reverse(elem,4);
    display(elem);
    
}