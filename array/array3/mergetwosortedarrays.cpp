#include<iostream>
#include<vector>
using namespace std;
//this code is written by me and it is totally incorrect

int main(){
    int arr1[]={1,4,5,8};
    int arr2[]={2,3,6,7,10,12};
    int sizeofarr1;
    int m=sizeofarr1;

    int sizeofarr2;
    int n=sizeofarr2;

int arr3[m+n];
int sizeofarr3;
//now we will compare and put the values in  arr3;
int i=0;
int j=0;
int k=0;
while(k<sizeofarr3){
    if(arr1[i]>arr2[j]){
        arr3[k]=arr2[j];
        j++;
        k++;

    }
    else if(arr1[i]<arr2[j]) {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    else{
        arr3[k]=arr2[j];
        j++;
        k++;
    }

}

cout<<arr3;
return 0;
}