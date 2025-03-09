#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v { 9, 3, 1, 19, 3, 2, 8, 12, 5};

    priority_queue<int, vector<int>, greater<int>> minvector(v.begin(), v.end());
    minvector.push(3);
    minvector.push(4);
    minvector.push(110);
    minvector.push(9);
    minvector.push(14);
    minvector.push(-1);
    minvector.push(30);
    minvector.push(44);
    minvector.push(50);

    cout<<minvector.top()<<endl;
    return 0;

}