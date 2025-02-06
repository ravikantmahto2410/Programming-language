#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter the Rows of 1st Matrix : ";
    cin>>m;
    int n;
    cout<<"Enter the Columns of 1st matrix : ";
    cin>>n;

    int p;
    cout<<"ENter the Rows of 2nd Matrix : ";
    cin>>p;
    int q;         
    cout<<"Enter the Columns of 2nd Matrix : ";
    cin>>q;

    if(n==p){
        int a[m][n];
        cout<<"Enter the elements Of 1st Matrix : ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter elements of 2nd matrix : ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        //resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                //res[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j]
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;
        //print 
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{//n!=p
    cout<<"The Matrices cannot Be multiplied ";

    }
}
