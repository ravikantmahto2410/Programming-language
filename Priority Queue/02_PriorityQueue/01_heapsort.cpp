#include<bits/stdc++.h>
using namespace std;

class MaxHeap {
    vector<int> hp;
    int i; //here i denotes 0 to i  everything is maxheap
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
    void downheapify(int idx, int bound){ //this is the index from where we want to start
        while(idx < hp.size()){
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            if(lc >= bound) break; // idx -> leaf
            int maxElem = idx;
            if(hp[lc] > hp[maxElem]){
                maxElem = lc;
            }
            if(rc < bound && hp[rc] > hp[maxElem]){
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
    

    void pop(){

        /*
        Time Complexity = O(logn);
        */
        //remove the highest priority element
        if(empty()) return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        i--;
        if(!empty());
        downheapify(0 , i);
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

    void heapSort(){
        
    }
    //constructor
    MaxHeap(vector<int> v){
        hp = v;
        //reverse mein loop chalayenge and we can skip half of the elements
        int n = hp.size();
        int i = n;
        for(int j = n / 2; j >= 0; j--){
            downheapify(j, i);
        }
    }
};
int main(){
    vector<int>v {9, 6, 1, 19, 3, 2, 8, 12, 5};
    MaxHeap hp(v);
    hp.display();
    return 0;
}