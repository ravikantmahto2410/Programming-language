#include<iostream>
using namespace std;

int countDigitsSquare(int number){
    int count=0;
    while(number){
        // //here we are not writing the modulus operator line because
        //  we are just printing the number and not performing any operations;
        //  also we have only to pay attentions on number of digits and not on number
        count++;
        number/=10;
    }
    return count*count;//return square(count)i.e we can also retrun a function
}

int main(){
    int number ;
    cin>>number;

    cout<<countDigitsSquare(number)<<endl;
}