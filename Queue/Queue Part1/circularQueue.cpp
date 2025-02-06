#include<bits/stdc++.h>
using namespace std;
// this code is modified form of queue from array
class Queue{
public:
    int f;
    int b;
    int s;
    vector<int>arr;
    Queue(int val){
        f=0;
        b=0;
        s=0;// ye size current queue ka size baatyaega
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
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
            return;
        }
        f++;
        s--;
    }
    int front(){ // this will  return the topmost element
        if(s==0){
            cout<<"Queue is EMPTY!"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        return arr[b-1];
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
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