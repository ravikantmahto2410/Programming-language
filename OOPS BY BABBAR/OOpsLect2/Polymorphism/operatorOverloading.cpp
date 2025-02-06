#include<bits/stdc++.h>
using namespace std;
class Param{
    public:
    int val;

    void operator+(Param& object2){ // defining the behaviour of the operator
        int value1 = this->val;
        int value2 = object2.val;
        cout<<(value2-value1)<<endl;

    }
};
int main(){
    Param object1,object2;
    object1.val = 7;
    object2.val = 2;

    //this should print the difference between them
    object1 + object2; // but the compiler is not able to recognise the function of the + operator so we have to define ts function
    return 0;   
}