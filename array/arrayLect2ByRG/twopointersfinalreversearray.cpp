#include<iostream>
#include<vector>
using namespace std;

void display (vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);

    display(v);
    //now reversing;
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        //swap v[i] and v[j];
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
        //we can do the smae thing using for loop by intialising the two variables  in the same loop

        //for(int i=0,j=v.size()-1;i<=j;i++,j--){
            //  now use the swap technique 
            // int temp=v[i];
            // v[i]=v[j];
            // v[j]=temp;

    //method  3 for reversing the elements
    //is by using the inbuilt function 
    //reverse(v.begin(),v.end());this line will do the reverse 
            

    }
   display(v);
   return 0;

}