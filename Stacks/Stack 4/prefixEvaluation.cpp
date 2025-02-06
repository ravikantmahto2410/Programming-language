#include<bits/stdc++.h>
#include<stack>
using namespace std;
int solve(int val1, int val2, int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1 / val2;
}
int main(){
    string s = "-/*+79483"; //This is Prefix Expression
    // Now We need  one stacks , 1 for values
    stack<int>val;
    for(int i=s.length()-1;i>=0;i--){
        // check if  s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57) { // digit . Note if we compare a char with number then it automatically gets compared with ascii value
            val.push(s[i]-48);
        }
        else{// s[i] it is ->*, /, +, -
        //kaam
        int val1 = val.top();
        val.pop();
        int val2 = val.top();
        val.pop();
        int ans = solve(val1,val2,s[i]);
        val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}