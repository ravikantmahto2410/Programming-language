#include<iostream>
#include<string>
#include<vector>
using namespace std;

void storeSubset(string ans, string original, vector<string>& v){
    if(original == ""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    storeSubset(ans,original.substr(1),v);
    storeSubset(ans+ch,original.substr(1),v);


}
int main(){
    string str = "abc";
    vector<string>v;
    storeSubset("",str,v);
    for(string ele : v){
        cout<<endl;
    }
}