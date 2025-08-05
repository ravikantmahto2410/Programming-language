#include<bits/stdc++.h>
using namespace std;

class student {
public:
    string name;
    int rno;
    float percent;
};
int main(){
    int x;
    x = 7;
    
    // student s; // student s likh ke ek badda dabba ban gya aur uske ander dabbe hai , name,rno,percent
    // student s; this is called as declaration
    // Line 17 to 19 is called intialization
    // s.name = "raghav";//dot  is called as dot operator
    // s.rno = 76; 
    // s.percent = 92.6;

    //Instead of writing  line 17  to 19  if we want to do declaration and initialization in single line then write like line 22;
    student s = {"Raghav" , 76, 89.9};
    cout<<s.name<<endl;// to print the name of s;
    cout<<s.rno<<endl; // To print the rno of s;
    cout<<s.percent<<endl; // to print the percent of the s 

    // if we want to make the second student
    student y; // 
    y.name = "Neeraj"; // if we write s.name = "Neeraj then upar se raghav hat ke neeraj ho jaayega that is called as the overwriting"
    y.rno = 54;
    y.percent = 89.9;

    
    // concept line ;
    //suppose
    int r = 7;
    int z = r;
    cout<<z<<endl; // output will be 7  // similarly 

    student t = s; // this means ek badda daba bana t  jismein 3 dabbe hai unn  tino mein jo  s ki cheezin thi  wo saare fit hogye ek line ke ander  // this is called Deep copy
    t.name = "Ravikant";
    cout<<s.name<<endl;// here we will get raghav because , s is passing to t as pass by value

}