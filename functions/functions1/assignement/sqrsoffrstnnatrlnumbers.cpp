#include<iostream>
using namespace std;
int squares(int n){
    int result=0;
    for(int i=1;i<=n;i++){
        result=i*i;

    }
    return result;
}

int main(){
    int n;
    cout<<"Enter the value of n -";
    cin>>n;
    
    for(int i=1;i<=n;i++){
         cout<<squares(i)<<endl;
    }
    return 0;
}