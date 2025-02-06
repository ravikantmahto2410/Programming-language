#include<iostream>
#include<string>
using namespace std;
void removeChar(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch=='h') removeChar(ans, original, idx+1);
    else removeChar(ans+ch, original, idx+1);
}
int main(){
    string str = " physics Wallah";
    string s = "";
    removeChar("",str,0);        // here we are passing 0 as index sor space saving,
}