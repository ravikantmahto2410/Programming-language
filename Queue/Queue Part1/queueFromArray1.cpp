#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    int f;
    int b;
    vector<int>arr;
    Queue(int val){// yahan par ek size aa rha hai
        f=0;
        b=0;
        vector<int>v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is FULL!"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(b-f==0){
            cout<<"Queue is EMPTY!"<<endl;
            return;
        }
        f++;
    }
    int front(){ // this will  return the topmost element
        if(b-f==0){
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        return arr[b-1]; // back hamesha mere last wale element se ek aage waale index mein rehta hai
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(b-f==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    // push, pop, front, back, size, empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}