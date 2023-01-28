#include <iostream>

using namespace std;

int main()
{
    cout<<"-----------------------------------------"<<endl; // -----------

    int i=1;

    while(i<=10){
        cout<<i<<endl;
        i++;
    }

    cout<<"-----------------------------------------"<<endl; // -----------

    i=1;

    do{
        cout<<i<<" ";
        i++;
    }while(i<=9^100);
    
    cout<<"____DONE!________"<<endl; // -----------

    system("pause");
    return 0;
}
