#include <iostream>
#include <fstream>
#include<string>
using namespace std;

void student :: calcGrade (const int x[3]) 
{   
      int sum=0 ;
      for (int i=0 ; i<3 ; i++)
      sum+=x[i];
      
    switch ((sum/3)/10)
    {
        case 10 :
        case 9  : grade = 'A'; break;
        case 8  : grade= 'B'; break;
        case 7  : grade='C'; break;
        case 6  : case 5 : case 4 : case 3 : case 2 : case 1: case 0 : grade=  'F'; break;
        default : grade= 'X';
    }         
}

void student :: fillIn(const string &file , const int & n , student arr[100])
{
        ifstream ReadFile (file);
    
 for (int i=0 ; i<n ; i++)
 {
    ReadFile >> arr[i].name.fistName;
    ReadFile >> arr[i].name.lastName;
    ReadFile >> arr[i].Id;
 
    for (int j=0 ; j<3 ; j++)
    ReadFile>>arr[i].quiz[j];
    
 } 
}

void student :: print() const
{

    cout << " full name : "<<name.fistName<<" "<<name.lastName<<endl;
    cout << " the id : "<<Id<<endl;
    cout << " quiz : "<<quiz[0] << " " <<quiz[1] << " "<<quiz[2]<<endl;
    cout << " final grade : "<< grade << endl;


}

void employee :: fillin( employee  arr[100] , const string& file , const int& n  )
{
     ifstream ReadFile (file);
    
 for (int i=0 ; i<n ; i++)
 {
    ReadFile >> arr[i].name.fistName;
    ReadFile >> arr[i].name.lastName;
    ReadFile >> arr[i].salary;
    ReadFile >> arr[i].age;

 } 

}

void employee :: print () const
{
    cout << " full name : "<<name.fistName<<" "<<name.lastName<<endl;
    cout << " Salary    : "<<salary<<endl;
    cout << " Age       : "<< age << endl;
}


void student ::  printFile()
{
    ofstream outFile ("Final.txt");
     

    outFile<< " full name : "<<name.fistName<<" "<<name.lastName<<endl;
    outFile << " the id : "<<Id<<endl;
    outFile << " quiz : "<<quiz[0] << " " <<quiz[1] << " "<<quiz[2]<<endl;
    outFile << " final grade : "<< grade << endl;


}