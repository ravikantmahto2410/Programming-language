#include<bits/stdc++.h>
using namespace std;
int main(){

  stack<int>st;
  cout<<st.size()<<endl;
  st.push(60);
  st.push(50);
  st.push(40);
  st.push(30);
  st.push(20);
  st.push(10);
  cout<<st.size()<<endl;  

  stack<int>temp;
  while(st.size() > 0){
    temp.push(st.top());
    st.pop();
  }

  // now we will first print the top element  in temp and then push the elements in original stack

  while(temp.size() > 0){
    cout<<temp.top()<<" ";
    st.push(temp.top());
    temp.pop();
  }
  
}