#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    //base case
    if(n == 1) return true;
    if(n%2 == 0){
        return isPowerOfTwo(n/2);
    }
    else {
        return false;
    }


}
int main(){
    int n;
    cout<<"Enter the positive integer : ";
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<" YES "<<endl;
    }
    else{
        cout<<" NO "<<endl;
    }

}