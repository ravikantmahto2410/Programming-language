#include<bits/stdc++.h>
using namespace std;

void reverseK(int k,queue<int>&elem){
    stack<int>st;
    //Step -01
    for(int i=0;i<k;i++){
        st.push(elem.front());
        elem.pop();
    }
    //step -02 stack se wapas queue ke piche se daal do
    while(st.size()>0){
        elem.push(st.top());
        st.pop();
    }
    //step-03
    int n = elem.size();
    for(int i=0;i<n-k;i++){
        elem.push(elem.front());
        elem.pop();
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
    elem.push(6);
    display(elem);
    int  k = 2;
    reverseK(k,elem);
    display(elem);
}