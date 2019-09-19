#include<iostream>
using namespace std;

class CPolygon {
    public:

    virtual void area() {
        cout<<"\nThe area of the shape is :";
    }
};


class CRectangle:public CPolygon{
    int length,breadth;

    public:

    void getData() {
        cout<<"\nEnter the length and breadth of the rectangle : ";
        cin>>length>>breadth;
    }

    void area() {
        cout<<"\nThe area of the rectangle is : ";
        cout<<length*breadth;
    }
};

class CTriangle : public CPolygon {
    int height,base;

    public:

    void getData() {
        cout<<"\nEnter the height and base length of the triangle : ";
        cin>>height>>base;
    }

    void area() {
        cout<<"\nArea of the triangle is : "<<0.5*height*base;
    }
};

int main() {
    CPolygon *polygon1,*polygon2;
    CRectangle rectangle;
    CTriangle triangle;

    polygon1 = &rectangle;
    polygon2 = &triangle;

    rectangle.getData();
    polygon1->area();

    triangle.getData();
    polygon2->area();

    return(0);
}