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
void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
     printPath(sr,sc+1,er,ec,s+'R');//right
     printPath(sr+1,sc,er,ec,s+'D');//downward
    

}
int main(){
    printPath(0,0,2,2,"");// we can also pass (1,1,3,3) for 3*3 matrix
}