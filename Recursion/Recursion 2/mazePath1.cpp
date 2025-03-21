#include<bits/stdc++.h>
using namespace std;

int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
    cout<<maze(0,0,2,2);// we can also pass (1,1,3,3) for 3*3 matrix
}