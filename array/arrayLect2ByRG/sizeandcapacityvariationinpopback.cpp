#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<int>v;
    v.push_back(5);//size=1 capcity =1
    v.push_back(6);// 2             2
    v.push_back(3);//3              4
    v.push_back(8);//4              4 
    v.push_back(4);//5              8
    v.push_back(11);//6             8
    v.push_back(16);//7             8
    v.push_back(15);//8             8
    v.push_back(33);
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    v.push_back(8);
    v.push_back(4);
    v.push_back(11);
    v.push_back(16);
    v.push_back(15);
    v.push_back(33);
    v.push_back(3);
    v.push_back(7);
    cout<<" the size is : "<<v.size()<<endl;
    cout<<"the capacity is : "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

     cout<<" the size is : "<<v.size()<<endl;
    cout<<"the capacity is : "<<v.capacity()<<endl;

    return 0;

}