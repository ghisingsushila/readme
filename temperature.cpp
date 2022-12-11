#include<iostream>
using namespace std;
class temperature {
    public:
    double tempfahrenheit;
    void convTemp(double temp){
        tempfahrenheit = (temp*1.8+32);
        cout<<"Temperature in F is"<<tempfahrenheit<<"F";
    }
};
int main(){
    temperature t1;
    double tempCelcious;
    cout<<"Enter temperature in celcious:";
    cin>>tempCelcious;
    t1. convTemp(tempCelious);
    return 0;
}