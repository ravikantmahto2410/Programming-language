#include<bits/stdc++.h>
using namespace std;
stack<int>temp;
void print(stack<int>st){
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //putting elements back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    print(st);
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(70);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    print(st);
}