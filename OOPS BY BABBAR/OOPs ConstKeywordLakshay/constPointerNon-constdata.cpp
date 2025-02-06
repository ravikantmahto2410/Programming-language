#include<iostream>
using namespace std;
int main(){
    // const with keyWords
    //  const int *a = new int(2);// CONST data bana diya , NON-CONST pointer bana diya   
    //  int const *a = new int (2); // this line is same as line 5
    // cout<< *a <<endl;
    // *a = 20;// can't change the const of pointer
    // cout<<*&a <<endl;
    // int b = 20;
    // a = &b;  // pointer itself can be reassigned
    // cout<<*a <<endl;


    //CONST Pointer , Const Data
    // int *const a = new int(2);
    // cout<<*a <<endl;
    // *a = 50;  // chal Jaayega
    // cout<<*a <<endl;
    // int b = 50;
    // a = *b;// nahi chalega , because CONST Pointer

    //const Pointer , CONST data
    // const int  *const a = new int(10);
    //const<<*a<< endl;
    //*a = 50;
    // int b = 100;
    // a = &b;

    return 0;
}