#include<bits/stdc++.h>
using namespace std;
/*My Approach
string notConsecutive(string s){
    stack<char>st;

    for(int i=0;i<s.length();i++){
        if(st.size()==0) st.push(s[i]);
        else{
            if(s[i]==st.top()){
                break;
            }
            else{
                st.push(s[i]); 
            }
        }
    }
    stack<char>temp;
    while(st.size()>0){
        temp.push(st.pop());
        st.pop();
    }
}
int main(){
    string s = "aaabbcddaabffg";
    cout<<notConsecutive(s);
*/

//Raghav Sir's Approach

string removeDup(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    } 
    s = " ";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s = "aaabbcddaabffg";
    cout<<s<<endl;
    s = removeDup(s);
    cout<<s<<endl;
}

