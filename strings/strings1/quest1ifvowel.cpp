#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="ragh";
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='0' ||str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<count;
    return 0;
}