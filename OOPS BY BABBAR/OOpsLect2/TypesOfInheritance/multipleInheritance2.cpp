#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int chemistry;

};
class B{
    public:
    int chemistry;
};
class C:public A, public B{
    public:
    int maths;
};
int main(){
    C obj; // we created  C naam ka ek Object
    // cout<<" "<<obj.chemistry<<" "<<obj.maths<<endl; // with this line the  the compiler will get show error of ambigouty to corect it line 20 is written
    cout<<" "<<obj.A::chemistry<<" "<<obj.maths<<endl;  // here we use scope Resoltion Operator  to  avoid ambigouty  , obj.A::chemistry means A ke dwaara jo chemistry ka dabba hai wo and , if obj.B::chemistry means the  B ke dwaara Chemistry ka dabba hai wo
    return 0;

}