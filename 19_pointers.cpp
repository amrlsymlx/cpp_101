#include <iostream>
using namespace std;

int main()
{
   int age = 29;
   double gpa = 3.9;
   string name = "Syamil";

   cout<<"Age :"<<&age<<endl; 
   cout<<"GPA :"<<&gpa<<endl; 
   cout<<"Name :"<<&name<<endl;

    //pointer-->memory address 

    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout<<pAge<<endl;
    cout<<pGpa<<endl;
    cout<<pName<<endl;
    
    return 0;
}