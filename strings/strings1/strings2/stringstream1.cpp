#include<bits/stdc++.h>
using namespace std;

int main(){

    string str =" raghav is   a maths teacher ";
    stringstream ss(str);
    string temp ;//to print these string in seperate lines we have to first store in temp for all words repeatedly

    //printing the strings in each line
    while(ss>>temp){
        cout<<temp<<endl;
    }
}