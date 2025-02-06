#include<bits/stdc++.h>
#include<stack>
using namespace std;
string solve(string val1, string val2, int ch){
    //pre to In
    // postfix is : v1 op v2
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch); 
    return s;
}
int main(){
    string s = "-/*+79483"; //This is Prefix Expression
    // Now We need  one stacks , 1 for values
    stack<string>val;
    for(int i=s.length()-1;i>=0;i--){
        // check if  s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57) { // digit . Note if we compare a char with number then it automatically gets compared with ascii value
            val.push(to_string(s[i]-48));
        }
        else{// s[i] it is ->*, /, +, -
        //kaam
        string val1 = val.top();
        val.pop();
        string val2 = val.top();
        val.pop();
        string ans = solve(val1,val2,s[i]);
        val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}