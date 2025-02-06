#include<iostream>
#include<stack>
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
    cout<<st.size()<<endl;
    st.push(10);   
    st.push(20); 
    st.push(30);  
    st.push(40);  
    st.push(50);
    print(st); // pass by value jaata hai usually
    stack<int>rt;
    stack<int>gt;

    //empty st into gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    // empty gt into rt
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    //empty rt into st
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    cout<<endl;
    print(st);
}