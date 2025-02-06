#include<iostream>
#include<string>
using namespace std;

int main(){
    //method 1 all codes of method 1 are correct
    // string s="abc";
    // cout<<s<<endl;
    // string t="def";
    // s=s+t;
    // cout<<s<<endl;

    //lmethod 2
    string s="abc";
    cout<<s<<endl;
    s=s+"def";
    cout<<s<<endl;


     //method 3
    //appending only character 
    string k="djraavan";
    cout<<k<<endl;
    k=k+'d';//appending only character
    cout<<k<<endl; 

    //we cant append any number 
    string m="rat";
    cout<<m<<endl;
    m=m+"123";//append  .we cant append any number like m=m+123 , we can do so by as string that is"123"
    cout<<m<<endl;

    //we cant only append but also modify like adding things left side example
    string y="pqrs";
    cout<<y<<endl;
    y="msd"+y;
    cout<<y;


    
   return 0;
}