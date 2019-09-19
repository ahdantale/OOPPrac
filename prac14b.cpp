#include<iostream>
using namespace std;


template <typename vectorType,int size = 5> class Vector {
    vectorType arr[size];

    public:

    Vector() {
        cout<<"\nEnter the elements of the Vector";

        for(int i=0;i<size;i++){
            cin>>arr[i];
        }

    }

    void sort() {
        for(int i=0;i<size;i++) {
            for(int j=0;j<size-i-1;j++){
                

                if(arr[j+1]<arr[j]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

            }
        }
    }

    void display() {
        cout<<"\nThe current vector is : ";

            for(int i=0;i<size;i++)
                cout<<" "<<arr[i];

        cout<<endl;
    }
};


int main() {
    Vector<int,3> vector;
    vector.sort();
    vector.display();
    return(0);
}