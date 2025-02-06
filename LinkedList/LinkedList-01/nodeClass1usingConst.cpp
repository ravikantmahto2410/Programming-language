#include<bits/stdc++.h>
using namespace std;

class Node { //Linked List ka proper  Node
public:
    int val;
    Node* next;
    Node(int val){ // in constructor it is not necesary ki yahan paramters mein jitne bhi attributes hai saare ko paas karein
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming LL
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout<<b.val<<endl;
    // Or  we can also use  below line to print the value of instead of using any b
    // Node* ptr = &b;
    // cout<<(*ptr).val<<endl; // line 25-26 will also  print the the value of b;

    // we can also change the value of the b;
    // Node* ptr = &b;
    // (*ptr).val = 60;
    // cout<<b.val;

   // instead of using line 29-31 to change the value of b we can write like this(line=33-34)
    // cout<<(*(a.next)).val; or line 35
    // cout<<(a.next)->val;


    // a has the acess of the b
    // a.next->val = 70;
    // cout<<(a.next)->val;
    

    // to print the value c without using c
    // cout<<(b.next)->val;

    // to print the value at c without using c and b
    // cout<<((a.next)->next)->val;

    // using the a print the value of d
    //*(a.next) a.next is b ka address and deference use karke b ke dono part ko acess kar sakt ahuun
    //*(a.next).val se  b ki value print ho jaayegi and 
    // *(a.next).next se b ki  address print ho jaayega

    // conclusion
    // conclusion-01 : a.next is b ka address
    // conclusion-02 : *(a.next) is b 
    // conclusion-03 : *(a.next).next is address of c 
    // conclusion-04 : *(*(a.next).next) is  c 
    // conclusion-05 : *(*(a.next).next).next  is  address of d;
    // conclusion-06 : *(*(*(a.next).next).next)  is  d;
    // conclusion-07 : *(*(*(a.next).next).next).val  is  value of d;
    // cout<<(*((*((*(a.next)).next)).next)).val;
    // line 62 and 64  are same
    // cout<< (((a.next)->next)->next)->val;




}