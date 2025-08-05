#include<bits/stdc++.h>
using namespace std;

void pushAtBottom(stack<int>&st, int n){
    if(st.size() == 0){
        st.push(n);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st, n);
    st.push(x);

}

void reverse(stack<int>&st){
    if(st.size() == 1){
        return;
    }
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st, x);
}

int main(){
    stack<int>st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(11);

    reverse(st);

    while(!st.empty()){
        int x = st.top();
        cout<<x<<" ";
        st.pop();
    }
}