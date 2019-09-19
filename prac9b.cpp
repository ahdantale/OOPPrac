#include<iostream>
#include<string.h>
using namespace std;

class String {
    char string[20];

    public:

    String() {
        cout<<"\nEnter the string : ";
        cin.getline(string,20);
    }

    void putData() {
        cout<<endl<<string;
    }

    friend bool operator==(String,String);
    friend String operator+(String,String);
};

bool operator==(String stringA,String stringB) {
    if(strcmp(stringA.string,stringB.string)==0)
        return true;
    else 
        return false;
}

String operator+(String stringA,String stringB) {
    strcat(stringA.string,stringB.string);
    return(stringA);
}

int main() {
    String stringA;
    
    String stringB;
    
    String stringC = stringA + stringB;

    if(stringA==stringB) {
        cout<<"\nEqual Strings\n";
    } else  {
        cout<<"\nUnequal Strings\n";
    }

    cout<<"\nResult of concatenation is : ";
    stringC.putData();

    cout<<endl;

    return(0);
}