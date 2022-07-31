#include <iostream>
#include <string>

using namespace std;

struct fullName
{
    string fistName;
    string lastName;
};
struct student 
{
    fullName name;

    int Id;
    int quiz[3]; 
    char grade ; 
    void calcGrade (const int x[]);  
    
    void fillIn (const string &file , const int& n , student arr[100]);
    void print() const;
    void printFile();
};

struct employee 
{
    fullName name;
    int salary;
    int age ; 

    void fillin(employee  arr[100] , const string& file , const int& n );
    void print () const ;
};

