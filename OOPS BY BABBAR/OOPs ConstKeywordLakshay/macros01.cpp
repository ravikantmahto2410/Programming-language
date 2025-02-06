#include<bits/stdc++.h>
using namespace std;

#define PI 3.14159465  //here PI is not a variable its just a way to do preprocessing before the compilation

float circleArea(float r){
    return PI*r*r;
}
float circlePerimeter(float r){
    return 2*PI*r;

}
int main(){
    cout<<circleArea(65.4)<<endl;
}