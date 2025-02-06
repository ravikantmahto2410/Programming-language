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
        cout<<endl;
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
    void addCycle(int idx){
        Node* temp = head;
        idx--;
        while(idx--){
            temp = temp->next;// loop khatam hote hi , mera temp idx mein hoga
        }
        temp->next->next = head->next;


    }
    int findLength(){
        Node* fast = head->next;
        Node* slow = head;
        bool flag = false;
        while(fast and fast->next){
            if(fast ==slow){
                flag = true;
                break;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        if(flag ==false) return 0;
        int cnt = 1;
        slow = slow->next;
        while(slow!=fast){
            cnt++;
            slow = slow->next;
        }
        return cnt;
    }

    
};
int main(){
    linkedList ll;
    ll.addFirst(1);
    ll.addFirst(2);
    ll.addFirst(3);
    ll.addFirst(4);
    ll.addFirst(5);
    ll.addFirst(6);
    
    ll.addCycle(4);
    cout<<ll.findLength()<<endl;
}