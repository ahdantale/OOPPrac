#include<iostream>
using namespace std;

const int size=5;

class TestTwo;

class TestOne {
    int arr[size];

    public:

    TestOne() {
        cout<<"\nClass TestOne";
        cout<<"\nEnter the elements of the array : ";
            for(int i=0;i<size;i++)
                cin>>arr[i];
    }
    

    friend float avrg(TestOne,TestTwo);
};

class TestTwo {
    int arr[5];
    public :

    TestTwo() {
        cout<<"\nClass TestTwo";
        cout<<"\nEntert the elements of the array : ";
            for(int i=0;i<size;i++)
                cin>>arr[i];
    }

    friend float avrg(TestOne,TestTwo);
};

float avrg(TestOne one,TestTwo two) {
    float sum=0;
        for(int i=0;i<size;i++)
            sum += one.arr[i]+two.arr[i];

    sum = sum/10;

    return(sum);
}

int main() {
    TestOne one;
    TestTwo two;
    float average = avrg(one,two);
    cout<<"\nThe average is  : "<<average;
    return(0);
}