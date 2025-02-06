#include<iostream>
using namespace std;
//this is mthod second in which we dont have to use loop inside loop function
void squares(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<"    ";
    }
}
int main(){
    int n;
    cin>>n;squares(n);
    return 0;
}