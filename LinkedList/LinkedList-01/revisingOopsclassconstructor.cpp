#include<iostream>
using namespace std;
class Student { // user defined data type
public:
    string name;
    int rno;
    float marks;

    Student(string name, int rno,float marks){ // this is constructor
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
int main(){
    Student s("raghav", 76, 92.6); // this is declaration with initialisation
    
    cout<<s.name<<endl;
}