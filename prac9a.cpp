#include<iostream>
using namespace std;

void vol(int edge) {
    cout<<"\nThe volume of cube is  : "<<edge*edge*edge<<endl;
}

void vol(int length,int breadth,int height) {
    cout<<"\nThe volume of the cuboid is : "<<length*breadth*height<<endl;
}

void vol(int radius,int height) {
    cout<<"\nThe volume of the cylinder is : "<<3.14*radius*radius*height<<endl;
}


int main() {
    int edge,length,breadth,height,radius,heightC;

    cout<<"\nEnter the edge of the cube : ";
    cin>>edge;
    vol(edge);

    cout<<"\nEnter the length,height,breadth of the cuboid to find its volume : ";
    cin>>length>>breadth>>height;
    vol(length,breadth,height);

    cout<<"\nEnter the radius,height of the cylineder to find its volume : ";
    cin>>height>>radius;
    vol(height,radius);

    return(0);
}