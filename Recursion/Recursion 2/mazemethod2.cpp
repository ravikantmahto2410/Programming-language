#include<bits/stdc++.h>
using namespace std;

int mazeTwo(int sr, int sc){
    if(sr<1 || sc<1) return 0;
    if(sr==1 && sc==1) return 1;
    int rightWays = mazeTwo(sr,sc-1);//right
    int downWays = mazeTwo(sr-1,sc);//down
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
    cout<<"No Of Ways = "<<mazeTwo(3,4);
}