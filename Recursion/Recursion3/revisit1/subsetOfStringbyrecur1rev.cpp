#include<iostream>
#include<string>
using namespace std;
//this is bekar wala method  method 1
void printSubset(string ans, string original){
    if(original==""){ //original=="" this means  whwnever original is empty or we can also write original.length()==0; 
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];   // isse  first character niklega original ka
    printSubset(ans+ch,original.substr(1));//original.substr means ki original ko pass nhi karna , original ke aage ka print karna hai
    printSubset(ans, original.substr(1));
}
int main(){
    string str = "abc";
    printSubset("",str);
}