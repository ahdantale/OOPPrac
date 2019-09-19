#include<iostream>
#include<string>
using namespace std;

const int size=5;

class Student {
    
   
    protected :

        string name;
        int rollno;

    public :

        void getData() {
            cout<<"\nEnter the name of the student : ";
            getline(cin,name);
            cout<<"\nEnter the roll number of the student :";
            cin>>rollno;

            
            
        }
    
        void putData() {
            cout<<"\nThe name of the student is  : ";
            cout<<name;
            cout<<"\nThe roll number of the student is : ";
            cout<<rollno;
            cout<<endl;
        }

        int _rollno(){
            return(rollno);
        }

        //void show();
    
};
// returntype ClassName::functionName() {
    
// }


class Exam: public Student {
    protected :

        int marks[size];

    public:

        void getMarks() {
            cout<<"\nEnter the marks scored in all 5 subjects : ";
                for(int i=0;i<size;i++)
                    cin>>marks[i];
            cin.ignore(1,'\n');
        }

        void putMarks() {
            cout<<"\nThe marks scored by the student in 5 subject  are : ";
                for(int i=0;i<size;i++)
                    cout<<"\nSubject : "<<i+1<<"marks : "<<marks[i];
            cout<<endl;
        }
};


class Result: public Exam {
    protected:

        float total,avg;

    public:

        void calculateMarks () {
            total  = 0;
                for(int i=0;i<size;i++)
                    total += marks[i];
            avg=total/size;
        }

        void showResults() {
            cout<<"\nThe total marks scored by the student are : ";
            cout<<total;
            cout<<"\nThe average marks scored by the student are : ";
            cout<<avg;
            cout<<endl;
        }

        
};





int main() {
    int n;

    cout<<"\nEnter the amount number of students you want the result for : ";
    cin>>n;
    cin.ignore(); 

    Result results[n];

    cout<<"\nEnter the data of the students : ";
    
    for(int i=0;i<n;i++){
        results[i].getData();
        results[i].getMarks();
        results[i].calculateMarks();
    }

    cout<<"\nThe data of the student as entered by the user is : ";

    for(int i=0;i<n;i++) {
        results[i].putData();
        results[i].putMarks();
        results[i].showResults();
    }

    return(0);
}