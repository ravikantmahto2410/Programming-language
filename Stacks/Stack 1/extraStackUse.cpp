#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(10);   
    st.push(20); 
    st.push(30);  
    st.push(40);  
    st.push(50);

    // we will use the extra stack
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        // int x = st.top(); 
        // st.pop();
        // temp.push(x);

        // Or we can also do 
        temp.push(st.top());
        st.pop();
    }
    //putting elements back from temp to st
    while(temp.size()>0){
        // int x = temp.top();
        // temp.pop();
        // st.push(x);

        // Or we can also do 
        while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }
    }
    cout<<endl;
    cout<<st.top()<<endl;
}