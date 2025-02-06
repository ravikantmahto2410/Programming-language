#include<iostream>
using namespace std;

int main(){
    int *ptr1=NULL;//it will reserve a special adress
    int *ptr2=0;//it will also  reserve the adress
    int *ptr3='\0';//it is known as null character it will also do the same work
    cout<<ptr1<<"  "<<ptr2<<"  "<<ptr3; 

    return 0;
}