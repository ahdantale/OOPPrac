#include<iostream>
using namespace std;

const int size=10;

class Array {
    int arr[size];

    public:

    Array() {
        cout<<"\nEnter the elements of the array : ";
            for(int i=0;i<size;i++)
                cin>>arr[i];
    }

    void operator++(){
    for(int i=0;i<size;i++)
        ++arr[i];
    }

    void putData() {
        cout<<"\nThe data of the array is \n";
            for(int i=0;i<size;i++)
                cout<<" "<<arr[i];
    }
};


int main() {
    Array arr;

    
    ++arr;

    arr.putData();

    cout<<endl;


    return(0);

}