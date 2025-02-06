#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {4,8,5,2,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    // printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // now we will find the previous element by using stacks
    int nse[n-1]; //declaring an array pse of size n which will store the previuos smaller elements
    stack<int>st;
    nse[n-1] = -1;
    st.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[i] <= st.top()){
            st.pop();
        }
        if(st.size()==0) nse[i] = -1;
        else nse[i] = st.top();
        st.push(arr[i]);
    }
    // now printing the previous smaller element
    for(int i=0;i<n;i++){
        cout<<nse[i]<<" ";
    }

}