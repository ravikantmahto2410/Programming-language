#include<iostream>
using namespace std;

void fun(int x,int y){
    cout<<"adress of functions wala x -  "<<&x<<endl;
    cout<<"adress of funtion wala y - "<<&y<<endl;
}

int main(){
    int x=3;
    int y=7;
    cout<<"address of main wala x - "<<&x<<endl;
    cout<<"address of main wala y - "<<&y<<endl;
    fun (x,y);
    }