#include<iostream>
using namespace std;

class Shape {
    protected:

    double dim1,dim2;

    public:

    void getData() {
        cout<<"\nEnter the two dimensions of the shape ";
        cin>>dim1>>dim2;
    }

    virtual void displayArea() {
        cout<<"\nThe area of the shape is : ";
        cout<<dim1*dim2;
    }

};

class Triangle: public Shape {
    public:

    void displayArea() {
        cout<<"\nThe area of the triangle is : "<<0.5*dim1*dim2;
    }


};

class Rectangle : public Shape {
    public:

    void displayArea() {
        cout<<"\nThe area of the rectangle is : "<<dim1*dim2;
    }
};

int main() {
    Shape *shape0,*shape1;
    Triangle triangle;
    Rectangle rectangle;

    shape0 = &triangle;
    shape1 = &rectangle;

    //Calling the getData function of the shape object.
    shape0->getData();
    shape0->displayArea();

    //Calling the getData function of the shape object.
    shape1->getData();
    shape1->displayArea();

    return(0);
}

