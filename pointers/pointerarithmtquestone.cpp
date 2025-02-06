#include<iostream>
using namespace std;
int main(){
    int a=15;
    int*ptr=&a;
    int b=++(*ptr);//if we do here post increament i.e (*ptr++)  we will get 15
    cout<<a<<"  "<<b;
    return 0;
}
