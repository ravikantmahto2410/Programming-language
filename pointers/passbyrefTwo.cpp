#include<iostream>
using namespace std;
void swap( int *x ,int *y){
    int temp=*x;
    *x=*y;//*y=6 and this 6 is put into the container of*x
    *y=temp;//temp=8 and this value is put to *yehich has value 6 so finaaly the value gets updated from 8 to 6
    return ;
}

int main(){
    int a=8 ,b= 6;
    int *x=&a;
    int *y=&b;
    swap(x,y);
    cout<<a<<" "<<b;

}