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


    return 0;
}
