#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{

student a[2];
employee em[2];

a[0].fillIn("students.txt" , 2 , a);
em[0].fillin(em ,"employee.txt" , 2 );


cout << " \n\nStudents  : "<<endl;
for (int i=0 ; i<2 ; i++)
{
    a[i].calcGrade(a[i].quiz);
    a[i].print();
    cout<<endl;
}

cout << "\n\n ***********************************************\n\n";


 cout << " Employees  : "<<endl;
for (int i=0 ; i<2 ; i++)
{
    em[i].print();
    cout<<endl;
}  

a[0].printFile();





    

}
