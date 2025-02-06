#include<bits/stdc++.h>
using namespace std;
int x = 2; //Global variables

void fun(){
    int x = 60;
    cout<< x <<endl;
    ::x = 40;
    cout<< ::x <<endl;//globa
}
int main(){
    ::x = 4;// Global variable x
    int x = 20;// Local to Main() fn
    // cout<<x<<endl;

    // to access the global variable eith colon colon
    // cout<<::x<<endl;//accessing the global variable with :: 

    {
        int x = 50;
        {
            int x = 44;
            cout << ::x <<endl;
        }
        cout<< x <<endl;// at this point the x at line 6 is also accessible and the x at line 14 is also accessible but the most  local variable wiill get printed
        cout<< ::x <<endl;
    }
    fun();
    return 0;
}