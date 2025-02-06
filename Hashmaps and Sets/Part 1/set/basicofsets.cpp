#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(0);
    s.insert(1); // set  only insert unique elements 
    s.erase(1);

    // to print the size of set 
    cout<<s.size()<<endl;

    // to check whether  a element exist or not
    int target = 40;
    /*s.find() -> it searches in the set, and if it is not found then it returns 
    the s.end()*/
    if(s.find(target) != s.end()){  // means target exist
        cout<<"Element Exists"<<endl;
    }
    else{
        cout<<"Element Doesn't Exist"<<endl;
    }

    // if(s.find(target) == s.end()){ // this condition means that the element doesn't exists in the set

    // }


    //to print the elements of  the unordered set we use for each loop
    for(int ele : s){
        cout<<ele<< " ";
    }

    
}