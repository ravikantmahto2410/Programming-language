#include<bits/stdc++.h>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}

string solve(string val1,string val2, char ch){
    // we have to store prefix int the ans
    // prefix is-> op v1 v2
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}

int main(){
    string s = "(7+9)*4/8-3"; //This is Infix Expression
    // Now We need  two stacks , 1 for values , 1 for operators
    stack<string>val;
    stack<char>op;
    for(int i=0;i<s.length();i++){
        // check if  s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57) { // digit . Note if we compare a char with number then it automatically gets compared with ascii value
            val.push(to_string(s[i]-48));
        }
        else {// s[i] it is-> *, /, +, -
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    //work
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if(prio(s[i])>prio(op.top())) op.push(s[i]);
    
            else{//prio(s[i]) <= prio(op.top())
                while(op.size()>0 && prio(s[i]) <= prio(op.top())){
                    // I have to do val1 op val2
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
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
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3;
}