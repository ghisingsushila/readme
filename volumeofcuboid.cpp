#include<iostream>
using namespace std;
class volumecuboid{
    public:
    int length, height, width, volumeofcuboid;
    void readdata(){
        cout<<"enter the length of the cuboid:";
        cin>>length;
        cout<<"enter the height of the cuboid:";
        cin>>height;
        cout<<"enter the width of the cuboid:";
        cin>>width;
    }
    void calcvolume(){
        volumeofcuboid = length*height*width;
        cout<<"the volume of cuboid is"<<volumeofcuboid<<"cm3";
    }
};
int main(){
    volumecuboid v1;
    v1. readdata();
    v1. calcvolume();
    return 0;
}