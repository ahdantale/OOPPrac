#include<iostream>

using namespace std;

class Complex {
    int real,imag;

    public:

    Complex() {
        cout<<"\nEnter the real part : ";
        cin>>real;
        cout<<"\nEnter the imaginary part : ";
        cin>>imag;
    }

    Complex(int _real,int _im):real(_real),imag(_im){}

    void printData() {
        cout<<"\nReal part "<<real<<"\nImaginary Part "<<imag<<endl;
    }

    friend Complex operator+(Complex,Complex);
};

Complex operator+(Complex obj1,Complex obj2) {
    Complex obj3(0,0);
    obj3.real = obj1.real + obj2.real;
    obj3.imag = obj1.imag + obj2.imag;
    return(obj3);
}

int main() {
    Complex obj1,obj2;

    Complex obj3(0,0);

    obj3 = obj1+obj2;

    cout<<"\nAfter addition : "<<endl;
    obj3.printData();

    return(0);
}