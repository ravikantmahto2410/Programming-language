#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
void deletenode(Node* head, Node* target){ // this code is not applicable if the Head Node itself has to be deleted
    Node* temp = head;
    while(temp->next != target){
        temp = temp->next;
    }
    temp->next = temp->next->next;
}
// if we have to delete the head node itself then below is the function
// we can make the the return type as Node
int main(){
    Node* a  = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    deletenode(a,d);
    display(a);

}