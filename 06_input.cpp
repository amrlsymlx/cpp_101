#include <iostream>

using namespace std;

int main()
{   
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);

    int age; 
    cout<<"Enter your age: ";
    cin>>age;


    cout<<"Hello "<<name<<"! "<<" You are "<<age<<" years old.";

    
    
    return 0;
}