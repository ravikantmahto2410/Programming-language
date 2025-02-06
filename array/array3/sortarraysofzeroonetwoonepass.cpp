#include<iostream>
#include<vector>
using namespace std;

void  sortcolors(vector<int>&nums){
    // one pass solution or dutchflag algorithm this is best method to solve this question.
    int lo=0;
    int mid=0;
    int hi=nums.size()-1;

    // points or hints of this question are :
    // 1.mid ke barre mein soncho and ussi ke sath khela karna has_virtual_destructor
    // 2.0 to lo-1 ->0 rakhna hai, and mid+1 to end tak 2 ko rakhna hai 
    // 3.lo to mid-1 tak ko 1 rakhna hai :

    while(mid<=hi){
        if(nums[mid]==2){// if this gets satisfied then swap lo and hi
        int temp=nums[mid];
        nums[mid]=nums[hi];
        nums[hi]=temp;
        hi--;
        }
       else if(nums[mid]==0){
            int temp=nums[mid];
             nums[mid]=nums[lo];
             nums[lo]=temp;
             lo++;
             mid++;
        }
        else{
            mid++;
        }
    }
}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;

    sortcolors(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }

}
