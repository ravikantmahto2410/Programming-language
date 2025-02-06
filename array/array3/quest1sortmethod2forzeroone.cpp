#include<iostream>
#include<vector>
using namespace std;
//this is method two for sorting zeros and ones
void sortBytwopointers(vector<int>&v){
    int n=v.size();
    int i=0;
    int j=n-1;

    while(i<j){
        if(v[j]==1)j--;
        if(v[i]==0)i++;//here we can also use else if to avoid error 
        if(i>j) break;//this line will break  the iteration as soon as i>j to avoid error arising because of we are inside the mid of loops 
        if(v[i]==1&& v[j]==0)//here we can also use else if to avoid error  or we can shift this entire condition to first condition inside while loop
        {
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
    return ;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sortBytwopointers(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;

}
