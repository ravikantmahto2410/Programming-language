#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    priority_queue<int>maxhparray(arr, arr + 9);
    maxhparray.push(9);
    maxhparray.push(6);
    maxhparray.push(1);
    maxhparray.push(19);
    maxhparray.push(3);
    maxhparray.push(2);
    maxhparray.push(8);
    maxhparray.push(12);
    maxhparray.push(5);

    cout<<maxhparray.top()<<endl;

    return 0;
}