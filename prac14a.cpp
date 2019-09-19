#include<iostream>
#include<string>

using namespace std;


template <typename type> void findMax(type a,type b) {
    if (a>b) {
        cout<<"\n"<<a<<" is greater than "<<b<<endl;
    } else if(a<b) {
        cout<<"\n"<<b<<" is greater than "<<a<<endl;
    } else {
        cout<<"\nBoth are equal "<<endl;
    }
}



int main() {
    int num1=30,num2=40;
    float num3=90.0,num4=89.9;

    findMax(num1,num2);
    findMax(num3,num4);


    return(0);
}