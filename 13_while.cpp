#include <iostream>

using namespace std;

int main()
{
    int i=1;

    while(i<=10){
        cout<<i<<endl;
        i++;
    }

    // -----------
    cout<<"____________\n"<<endl;

    i=1;

    do{
        cout<<i<<" ";
        // cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n"<<endl;
        i++;
    }while(i<=999999);
    
    // -----------
    cout<<"______DONE______\n"<<endl;

    system("pause");
    return 0;
}