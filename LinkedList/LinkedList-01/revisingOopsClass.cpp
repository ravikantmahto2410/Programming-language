#include<iostream>
using namespace std;
class Student { // user defined data type
public:
    string name;
    int rno;
    float marks;
};
int main(){
    Student s;
    s.name = "Raghav Garg";
    s.rno = 76;
    s.marks = 92.6;
    cout<<s.name<<endl;
}