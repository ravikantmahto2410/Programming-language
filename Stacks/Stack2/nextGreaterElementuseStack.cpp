#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //next Greater Element Array
    int nge[n];

    // best method for solving this problem using a stack :pop, ans, push & reverse mein travel lkarna hai
    // SC = O(n)  TC = O(n)
    stack<int>st;
    nge[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        //pop all the elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //mark the ans in the nge array
        if(st.size()==0) nge[i] = -1;
        else nge[i] = st.top();
        //push the array[i]
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;

}