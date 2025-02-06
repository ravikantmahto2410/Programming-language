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
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){      // Chaho to yaad kar lo iss ko
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size(Node* head){ // abhi ke liye head node a hai
    Node* temp = head;
    int n = 0;
    while(temp != NULL){      // Chaho to yaad kar lo iss ko      
        temp = temp->next;
        n++;
    } 
    return n;    
}
int main(){
    Node* a = new Node(10); // isse ek node banna au rusmein value 10gayi
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    
    a->next = b;   //this means  a->next is equivalent to (*a).next which means a wale address pe jao au wahan ke next ko utha ke lao ya badal do so yahan NULL ke jagah adress of b chala jaayega
    b->next = c;
    c->next = d;
    d->next = e;
    
    display(a);
    cout<<size(a);


}