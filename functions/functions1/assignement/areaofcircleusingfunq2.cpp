#include<iostream>
using namespace std;
// //this code is written by me and it is similar to solutions given 
// in the assignments solutions 

float areaOfCircle(int radius){
    float area=0;
    area=3.14*radius*radius;

    return area;
}

int main(){
    int radius;
    cout<<"Enter the value of radius : ";
    cin>>radius;

    cout<<areaOfCircle( radius);

    return 0;
}