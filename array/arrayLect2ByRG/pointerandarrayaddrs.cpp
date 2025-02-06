#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int*ptr=arr;//giving address
    cout<<ptr<<endl;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
        
    }

    return 0;

}