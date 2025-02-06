#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int n){ // this is constructor
        data = n;
        next = NULL; 
    }

};

class linkedList{
public:
    Node* head;
    Node* tail;
    linkedList(){
        head = NULL;
        tail = NULL;
    }
    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    void addFirst(int val){
        Node* temp = new Node(val);
        if (head == NULL) head = temp;
        else{
            temp->next = head;
            head = temp;
        }
        if(tail == NULL) tail = head;

    }
    void addLast(int val){
        Node* temp = new Node(val);
        if(tail == NULL) tail == temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        if(head == NULL) head = tail;
    }

    void addAtIdx(int idx,int val){
        if(idx == 0)addFirst(val);
        else{
            idx--;
            Node* temp = head;
            while(idx--){
                temp = temp->next;
            }
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            
        }
    }

    void getAtIdx(int idx){
        if(idx == 0)cout<<head->data;
        else{
            Node* temp = head;
            while(idx--){
                temp = temp->next;
                cout<<temp->data<<endl;
            }
        }
    }
    void deleteAtIdx(int idx){
        if(idx == 0) head = head->next;
        else{
            Node* prev = NULL;
            Node* curr = head;
            while(idx--){
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
        }
    }
};
int main(){
    linkedList ll;
    ll.addFirst(1);
    ll.addFirst(2);
    ll.addFirst(3);
    ll.addFirst(4);
    // ll.display();
    cout<<endl;
    ll.addLast(1);
    ll.addLast(2);
    ll.addLast(3);
    ll.addLast(4);
    ll.addAtIdx(3,8);
    ll.display();

}