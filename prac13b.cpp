#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main(int argc,char *argv[]) {
    ifstream fin;

    fin.open(argv[1]);

    if (fin.is_open()){
        while(!fin.eof()) {
            string readString;
            getline(fin,readString,'\n');
            cout<<readString<<endl;
        }
    } else {
        cout<<"\nBad filename";
    }

    return(0);
}
