#include <iostream>

using namespace std;

void firstFunction(string name, int age){
    cout<<"Hello "<<name<<"!"<<" This is my first C++ function! "<<"You are "<<age<<" years old."<<endl;
}

int main()
{
    string userName;
    int userAge;

    cout<<"Enter your name: ";
    getline(cin, userName);

    cout<<"Enter your age: ";
    cin>>userAge;
    
    firstFunction(userName, userAge);
    
    return 0;
}
