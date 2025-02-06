#include<iostream>
#include<vector>
using namespace std;
int main(){
    //int this code will show the difference between the size and capacity
    vector<int>v;
    v.push_back(6);
    cout<<v.size()<<endl;//1   //if we put capacity instead of size then result will be different
    v.push_back(1);
    cout<<v.size()<<endl;//2    //if we put capacity instead of size then result will be different
    v.push_back(9);
    cout<<v.size()<<endl;//3    //if we put capacity instead of size then result will be different
    v.push_back(10);
    cout<<v.size()<<endl;//4     //if we put capacity instead of size then result will be different

    

    return 0;
}
