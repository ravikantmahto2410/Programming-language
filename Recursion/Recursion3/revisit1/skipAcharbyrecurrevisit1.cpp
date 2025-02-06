#include<iostream>
#include<string>
using namespace std;
void removeChar(string ans, string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch = original[0];  // this line will consider only first character of original string
    if(ch=='a') removeChar(ans,original.substr(1));//original.substr(1)  means 1 se aage consider karo including at 1
    else removeChar(ans+ch, original.substr(1));
}
int main(){
    string str = "raghav Garg";
    string s = "";
    removeChar("",str);
}