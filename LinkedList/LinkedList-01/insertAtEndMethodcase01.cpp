#include<bits/stdc++.h>
using namespace std;
class Node {// user defined Data Type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{ // this is user defined data structure
public:
  // Node* head = NULL;// initially the head is pointing to NULL. and here we are not iusing the constructor so we are writing like this
    // Node* tail = NULL; // initially jo tail hai uske andr jo adress hai khud ka  wo bhi NULL hai
    // int size = 0;
    // we can write like 12-15 or 
    // or we can use constructor like 
    Node* head;
    Node* tail;
    int size;
    LinkedList(){// this is a constructor  jo intially ye batati hai ki agar mein linked listhoti hai to head and tail dono NULL pe he
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;       
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    // LinkedList* ll = new LinkedList(); // if we want to allocate dynamically 
    LinkedList ll;// this menas ek linkedlist ban jaayegi khaali waali
    ll.insertAtEnd(10); // till now the 10 is attached to NULL;
    ll.display();
    ll.insertAtEnd(20); //{10 is attached to 20 and 20 is attached t NULL};
    ll.display();
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    cout<<ll.size;
}
