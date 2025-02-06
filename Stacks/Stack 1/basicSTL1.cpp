#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    cout<<st.size()<<endl;//size-00
    st.push(10);   // size :01
    st.push(20); // size: 02
    st.push(30);  // size:03
    st.push(40);  // size:04
    cout<<st.size()<<endl; // prints 4
    st.pop(); // rmoves the topmost element from the stack
    cout<<st.size()<<endl; // size:3
    cout<<st.top()<<endl; // this will print the topmost element
    


}