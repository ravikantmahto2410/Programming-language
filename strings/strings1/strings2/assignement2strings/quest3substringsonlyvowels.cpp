#include<bits/stdc++.h>
using namespace std;

//ye question dimag kharab kar diya pura
int main(){
    string str;
    cin>>str;

    int count=0;
    int answer=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a' or  str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u'){
            count++;
        }
        else{
            answer+=count*(count+1)/2;
            count=0;
        }
    }
    answer+=count*(count+1)/2;
    cout<<answer<<endl;
    return 0;
}