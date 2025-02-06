#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // now we will find the previous Greater Element using Stacks
    int pge[n];
    stack<int>st;
    pge[0] = -1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        // first we will do pop  the elements if present element is greater than top of the stack elements  
        while(st.size()>0 && arr[i] > st.top()){
            st.pop();
        }
        if(st.size() == 0){
            pge[i] = -1;
        }
        else{
            pge[i] = st.top();
        }
        // now we willl push the every element
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;

}