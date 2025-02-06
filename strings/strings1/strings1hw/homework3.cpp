#include<iostream>;
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="qwertyuipop";
    cout<<s<<endl;
    reverse(s.begin()+1,s.begin()+6);
    cout<<s;

}