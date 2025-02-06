#include<bits/stdc++.h>
using namespace std;
int stringtointeger(string s){
    int answer =0;
    int product=1;
    for(int i=s.size()-1;i>=0;i--){
        answer+=(s[i]-'0')*product;
        product*=10;
    }
    return answer;
}
int main(){
    string s;
    cin>>s;

    cout<<stringtointeger(s);
    return 0;

}