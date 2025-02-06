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
class Queue{ // this is user defined data structure
public:
    Node* head;
    Node* tail;
    int s;
    Queue(){// this is a constructor  jo intially ye batati hai ki agar mein linked listhoti hai to head and tail dono NULL pe he
        head = tail = NULL;
        s = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(s==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Queue is Empty :"<<endl ;
            return;
        }
        Node* temp = head;
        head = head->next;
        s--;
        delete(temp);// to prevent wastage
    }
    int front(){
        if(s==0){
            cout<<"Queue is Empty :"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node* temp = head;       
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0){
            return true;
        }
        else return false;
    }
};

int main(){
    Queue q;
    //push, pop, front, back, size, empty
    q.pop();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
    
}
