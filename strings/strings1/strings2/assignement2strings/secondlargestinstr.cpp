#include<bits/stdc++.h>
using namespace std;


 //this code is completely written from solution video.so do it once more
int main(){
    string str;
    cin>>str;

    char max1='!' ,max2='!';//! is used instead of int_min because in strings  works on the ascii calue

    for(int i=0;i<str.size();i++){
        if(max1<str[i]){
            max2=max1;
            max1=str[i];
        }
        else if(max2<str[i] and max1!=str[i]){
            max2=str[i];
        }

    }
    if(max2=='!') cout<<"No second largest number is possible";
    else cout<<max2<<endl;

return 0;   
}
