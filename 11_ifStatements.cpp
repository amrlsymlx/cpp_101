#include <iostream>

using namespace std;


int main()
{
    bool isMale = true;
    bool isTall = true;

    if(isMale){
        cout<<"You are a Male"<<endl;
    } else {
        cout<<"You are a Female"<<endl;
    }

    if(isMale && isTall){
        cout<<"You are a tall Male"<<endl;
    } else if(isMale && !isTall){
        cout<<"You are a short Male"<<endl;
    } else if(!isMale && isTall){
        cout<<"You are a tall Female"<<endl;
    }
    else {
        cout<<"You are a short female."<<endl;
    }

    if(isMale || isTall){
        cout<<"You are either a Male or tall or both"<<endl;
    } else {
        cout<<"You are a short Female"<<endl;
    }

     // -----------
    cout<<"____________\n"<<endl;

    int num1, num2, num3;

    num1=10;
    num2=20;
    num3=3;

    if(num1>num2 && num1>num3){
        cout<<num1<<endl;
    }else if(num2>num1 && num2>num3){
        cout<<num2<<endl;
    }else{
        cout<<num3<<endl;
    }

    return 0;
}
