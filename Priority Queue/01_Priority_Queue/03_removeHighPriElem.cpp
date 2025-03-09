#include<bits/stdc++.h>
using namespace std;

class MaxHeap {
    vector<int> hp;
    void upheapify(int ci){
        while(ci > 0){
            int pi = (ci - 1) / 2;
            if(hp[pi] < hp[ci]) {
                swap(hp[pi], hp[ci]);
                ci = pi;
            } else {
                break;
            }
        }
    }
    void downheapify(int idx){ //this is the index from where we want to start
        while(idx < hp.size()){
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            if(lc >= hp.size()) break; // idx -> leaf
            int maxElem = idx;
            if(hp[lc] > hp[maxElem]){
                maxElem = lc;
            }
            if(rc < hp.size() && hp[rc] > hp[maxElem]){
                maxElem = rc;
            }
            if(maxElem != idx){
                swap(hp[idx], hp[maxElem]);
                idx = maxElem; //this  is for next Iteration
            }else{
                break;
            }
        }
    }

public: 
    void push(int element) {
        /*
        Time Complexity = O(logn);
        */
        hp.push_back(element);
        upheapify(hp.size() - 1);
    }

    void pop(){

        /*
        Time Complexity = O(logn);
        */
        //remove the highest priority element
        if(empty()) return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        if(!empty());
        downheapify(0);
    }
    int peek(){
        /*
        Time Complexity = O(1);
        */
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
    hp.pop();
    hp.display();
    hp.pop();
    hp.display();
    hp.pop();
    hp.display();
    return 0;
}