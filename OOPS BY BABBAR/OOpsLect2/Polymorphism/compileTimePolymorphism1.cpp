#include<bits/stdc++.h>
using namespace std;
//this is example of compile Time PolyMorphism
class Maths{
    public:
    //here sum function is existing in multiple forms so  we can say that here polymorphism is taking place
    
    int sum(int a, int b){
        cout<<"I am in first Signature"<<endl;
        return a + b;
    }
    int sum(int a,int b,int c){
        cout<<"I am in Second Signature"<<endl;
        return a + b + c;
    }
    int sum(int a, float b){
        cout<<"I am in Third Signature"<<endl;
        return a+b;
    }
    // double sum(int a, int b){  // to do the function Overloading we cant change the type of return type, we have to change the number of variables and the type of the variables
    //     return 500;
    // }
};
int main(){
    Maths obj;
    cout<<obj.sum(2,5);
    return 0;

}