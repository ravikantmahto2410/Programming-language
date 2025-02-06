#include<iostream>
#include<vector>
using namespace std;
void nonRepeating(vector<int>a,int n){
    bool flag=false;
    
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(i!=j and a[i]==a[j])break;
        }

        if(j==n){
            cout<<a[i]<<" is the first non repeating element ."<<endl;
            flag=true;

            break;
        }
    }
    if(!flag)cout<<"Ther is no Non - Repeating element in the array . "<<endl;
}

int main(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    nonRepeating(a,n);
    return 0;
}