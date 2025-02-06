#include<iostream>
using namespace std;
int main(){
    //proof that our computer checks the null character after the end of a strings
    char str[]={'a','b','c','d','e','f'};//supppose we dont know the size of the string and anyhow cant count the no of strings
    //in that case we use different approach to apply conditinon to terminiate the loop 
     for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
     }
    
    return 0;
}