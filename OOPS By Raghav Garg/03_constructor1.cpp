#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float percent;

    Student(string n,int r,float p){  // parameterised constructor // it is mandatory that constructor name should be should be same as class name
        name = n;
        rno = r;
        percent = p;
    }
};
int main(){
    Student s("Raghav",76,92.6); //
    // Student s(76,"Raghav",92.6);//this will generate error

    cout<<s.name<<" "<<s.rno<<" "<<s.percent;
    
}