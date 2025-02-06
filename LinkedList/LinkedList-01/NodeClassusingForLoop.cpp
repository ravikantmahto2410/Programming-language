#include<bits/stdc++.h>
using namespace std;

class Node { //Linked List Node
public:
    int val;
    Node* next;
    Node(int val){
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

    Node temp = a; // this means a ki dono cheezen ismein chali gayi // here temp is a node not a pointer
    // while(temp.next != NULL){
    //     cout<<temp.val<<" ";
    //     temp = *(temp.next);  // (temp.next) this is address of b ,  *(temp.next)  is the variable itself 
    // }

    while(1){   // while 1 will ,make this loop to run infinite times
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }



}