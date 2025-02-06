#include<bits/stdc++.h>
using namespace std;


//solved by watching the ma'am video
void topElement(stack<int>&st,int k){
    stack<int>helper;
    k--;
    while(k--){
        helper.push(st.top());
        st.pop();
    }
    st.pop();// this is the kth element
    while(!helper.empty()){
        st.push(helper.top());
        helper.pop();
    }
}
int main(){
    stack<int>st;
    st.push(6);
    st.push(7);
    st.push(2);
    st.push(9);
    st.push(8);
    st.push(4);

    topElement(st,3);
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}