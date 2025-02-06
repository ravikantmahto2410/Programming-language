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
    
    a->next = b;   //this means  a->next is equivalent to (*a).next which means a wale address pe jao au wahan ke next ko utha ke lao ya badal do so yahan NULL ke jagah adress of b chala jaayega
    b->next = c;
    Node* h = a;
    delete(h);
    cout<<a->val;
}