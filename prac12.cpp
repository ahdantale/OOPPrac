#include<iostream>
#include<string>
using namespace std;

class Test {
    string objName;
    int data;

    public:

    Test(string objName,int data) {
        this->objName = objName;
        this->data = data;
    }

    void print() {
        cout<<"\nObject name : "<<objName<<"\n Data in the object is : "<<data;
    }
};


int main() {
    Test test1("Test1",20),test2("Test2",32),test3("Test3",42);

    test1.print();
    test2.print();
    test3.print();

    cout<<endl;
    return(0);
}