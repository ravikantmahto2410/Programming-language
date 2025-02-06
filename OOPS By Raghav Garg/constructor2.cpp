#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    // we can declare the attributes in any order 
    string name;
    int rno;
    float percent;

    Student(int r, string n,float p){  // parameterised constructor // it is mandatory that constructor name should be should be shame as class name
        name = n;//  in line 10-12 order does not matters i.e we can print in any order
        rno = r;
        percent = p;
    }
};
int main(){
    // Student s("Raghav",76,92.6); //
    Student s(76,"Raghav",92.6);

    cout<<s.name<<" "<<s.rno<<" "<<s.percent;
}