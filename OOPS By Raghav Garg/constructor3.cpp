#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float percent;
    // there can be multiple constructors
    Student(int r,string n){
        rno = r;
        name = n;
    }
    Student(int r, string n,float p){  // parameterised constructor // it is mandatory that constructor name should be should be shame as class name
        name = n;// line 10-12 order does not matters
        rno = r;
        percent = p;
    }
};
int main(){
    // Student s("Raghav",76,92.6); //
    Student s(76,"Raghav");

    cout<<s.name<<" "<<s.rno<<" ";
}