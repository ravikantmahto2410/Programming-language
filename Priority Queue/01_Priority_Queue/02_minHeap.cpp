#include<bits/stdc++.h>
using namespace std;

class MaxHeap {
    vector<int> hp;
    void upheapify(int ci){
        while(ci > 0){
            int pi = (ci - 1) / 2;
            if(hp[pi] > hp[ci]) {
                swap(hp[pi], hp[ci]);
                ci = pi;
            } else {
                break;
            }
        }
    }

public: 
    void push(int element) {
        hp.push_back(element);
        upheapify(hp.size() - 1);
    }
    int peek(){
        if(empty()) return INT_MIN;
        return hp[0];
    }

    bool empty(){
        return hp.size() == 0;
    }
    void display() {
        cout<<"[";
        for(int i = 0; i < hp.size(); i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]"<<endl;
    }
};
int main(){
    MaxHeap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();

    return 0;
}