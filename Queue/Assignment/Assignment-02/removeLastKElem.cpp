#include<bits/stdc++.h>
using namespace std;

void display(queue<int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void remove(queue<int>&q,queue<int>&help,int k){
    int r = q.size() - k;
    while(r--){
        help.push(q.front());
        q.pop();
    }
    while(q.size()>0) q.pop();

    while(help.size()>0){
        q.push(help.front());
        help.pop();
    }
}

int main(){
    queue<int>q;
    queue<int>help;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(9);
    display(q);
    remove(q,help,2);
    display(q);
}