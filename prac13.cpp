#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(int argc,char *argv[]) {
    
    ofstream fout;
    ifstream fin;

    fout.open(argv[1],ios::app);
    fin.open(argv[2]);

    if (fin.is_open()) {
        while(!fin.eof()) {
            string readFromFile;
            getline(fin,readFromFile,'\n');
            fout<<readFromFile<<endl;
        }
    } else {
        cout<<"Bad source file name";
    }

    fout.close();
    fin.close();

    return(0);

}