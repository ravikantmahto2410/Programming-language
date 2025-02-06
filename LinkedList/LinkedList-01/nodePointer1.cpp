#include<bits/stdc++.h>
using namespace std;

class Node{  //Linked List Node
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }

};
int main(){
    Node* a = new Node(10); // isse ek node banna au rusmein value 10gayi
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    
    a->next = b;   //this means  a->next is equivalent to (*a).next which means a wale address pe jao au wahan ke next ko utha ke lao ya badal do so yahan NULL ke jagah adress of b chala jaayega
    b->next = c;
    c->next = d;
    // d->next = NULL; isko karne ki jaroorat nhi hai

    // with the help of pointer the traversal becomes very easy

    // Node* temp = a;
    // while(temp != NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next; // this means pehle temp->next pe jaao whaan  jo cheez padi hai wo temp mein daal do
    // }


    // // to Print the value of b
    // cout<<a->next->val;

    // To Print The Value of c
    //cout<<a->next->next->val;

    // To Print The Value of d
    cout<<a->next->next->next->val;


}