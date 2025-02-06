#include<bits/stdc++.h>
using namespace std;
string decimal_to_binary(int num){
    string result = "";
    while(num > 0){
        if(num % 2 == 0 ){
            //since even
            result = "0" + result;// because the left se taraf se aage fill kar rhe hai binary number ko

        }
        else{
            // for odd
            result = "1" + result;
        }
        num = num / 2;// we can also do here right shifting by 1 like (num>>1);

    }
    return result;
}
int main(){
    cout<<decimal_to_binary(13)<<endl;
    return 0;

}