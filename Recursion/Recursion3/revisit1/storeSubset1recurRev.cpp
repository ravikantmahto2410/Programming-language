#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans, string original, vector<string>& v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];    
    storeSubset(ans, original.substr(1), v);
    storeSubset(ans+ch, original.substr(1), v);
}
int main(){
    string str = "abc";
    vector<string>v;
    storeSubset("",str,v);// now this will store the subsets
    for(string ele : v){ // ans this for each loop is for printing that subsets
        cout<<ele<<endl;
    }
}