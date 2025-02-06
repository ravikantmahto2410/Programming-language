#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int physics;

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
    C obj; // we created   C naam ka ek Object
    cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<endl;
    return 0;

}