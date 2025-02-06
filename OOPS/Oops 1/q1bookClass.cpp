#include<iostream>
using namespace std;

class book {
public:
    char name;
    int price;
    int noOfpages;

    int countBooks(int p){
        if(price < p) return 1;
        else return 0;

    }
    bool isBookPresent(char book){
        if(name == book) return true;
        else return false;
    }

};
int main(){
    book harrypotter;
    harrypotter.name = 'H';
    harrypotter.price = 1000;
    harrypotter.noOfpages = 500;

    cout<<harrypotter.countBooks(2000)<<endl;
    cout<<harrypotter.isBookPresent('B');


}