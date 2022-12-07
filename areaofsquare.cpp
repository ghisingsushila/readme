#include<iostream>
using namespace std;
class areasquare {
    public:
    int length;
    void readlength () {
        cout<<"enter length of square:";
        cin>>length;
    }
    void calcarea() {
        cout<<"the area of square is"<<length*length<<"cm2";
    }
};
int main(){
    areasquare a1;
    a1. readlength();
    a1. calcarea();
    return 0;
}