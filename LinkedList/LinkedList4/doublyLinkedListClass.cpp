#include<bits/stdc++.h>
using namespace std;
class Node {// user defined Data Type
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;  // Extra For Null
    }
};
class DoublyLinkedList{ // this is user defined data structure
public:
  // Node* head = NULL;// initially the head is pointing to NULL. and here we are not iusing the constructor so we are writing like this
    // Node* tail = NULL; // initially jo tail hai uske andr jo adress hai khud ka  wo bhi NULL hai
    // int size = 0;
    // we can write like 12-15 or 
    // or we can use constructor like 
    Node* head;
    Node* tail;
    int size;
    DoublyLinkedList(){// this is a constructor  jo intially ye batati hai ki agar mein linked listhoti hai to head and tail dono NULL pe he
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; // extra 
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;  // Extra 
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
            t->prev = temp;// extra 
            t->next->prev = t;// extra
            size++; // size++ ko bahar nhi likhna hai
        }
    }
    
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty :" ;
            return;
        }
        
        head = head->next;
        if(head) head->prev = NULL;// Extra
        if(head==NULL) tail = NULL;// Extra     
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is Empty: ";
            return;
        }
        else if(size==1){//extra
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;

    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if (idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;// extra
            size--;
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
    int getAtIdxOptimised(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<size/2){
                Node* temp = head;
                for(int i=1;i<=idx;i++){
                    temp = temp->next;
                }
                return temp->val;
            }
            else {
                Node* temp = tail;
                for(int i=1;i<size-idx;i++){
                    temp = temp->next;
                }
                return temp->val;
            }
        }
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
    DoublyLinkedList list ;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    // list.display();
    list.insertAtTail(40);
    // list.display();
    list.insertAtHead(50);
    // list.display();
    list.insertAtIdx(2,60);
    // list.display();
    list.deleteAtTail();
    // list.display();
    list.deleteAtHead();
    // list.display();
    list.insertAtTail(90);
    // list.display();
    list.deleteAtIdx(3);
    // list.display();
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.display();
    cout<<list.getAtIdx(4);



    
}
