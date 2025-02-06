#include<bits/stdc++.h>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int solve (int val1, int val2, int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if (ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "2+6*4/8-3"; //This is Infix Expression
    // Now We need  two stacks , 1 for values , 1 for operators
    stack<int>val;
    stack<char>op;
    for(int i=0;i<s.length();i++){
        // check if  s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57) { // digit . Note if we compare a char with number then it automatically gets compared with ascii value
            val.push(s[i]-48);
        }
        else {// s[i] it is-> *, /, +, -
            if(op.size()==0 || prio(s[i]) > prio(op.top())) op.push(s[i]);
            else{//prio(s[i]) <= prio(op.top())
                while(op.size()>0 && prio(s[i]) <= prio(op.top())){
                    // I have to do val1 op val2
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }

        }
    }
    // the operator stack can have values . so make it empty 
    while(op.size()>0){
        //work
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
    
}