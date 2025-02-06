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
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else {
            Node* t = new Node(val);// ek node ko bano jo insert kkarna hai
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;   // this means temp ko idx-1 tak le aaya
            }
            // to prevent the temp from losing connection with the previous node
            t->next = temp->next;
            temp->next = t;
            size++; // size++ ko bahar nhi likhna hai
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx == size-1) return tail->val;
        else {
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty :" ;
            return;
        }
        head = head->next;
        size--;
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
    LinkedList ll;
    ll.insertAtTail(10); // till now the 10 is attached to NULL;
    ll.display();
    ll.insertAtTail(20); //{10 is attached to 20 and 20 is attached t NULL};
    ll.display();
    ll.insertAtTail(30);// {10->20->30->NULL}
    ll.insertAtTail(40);// {10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(50);// {50->10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(24);   // {24->50->10->20->30->40->NULL}
    ll.display();
    ll.insertAtIdx(4,80);  //  {24->50->10->20->80->30->40->NULL}
    ll.display();
    ll.deleteAtHead();
    ll.display();
    
}