#include <iostream>

// to inclde math functtion
#include <cmath> 

using namespace std;

int main()
{
    cout<<1+1<<endl;
    cout<<10/2<<endl;

    int wnum = 5;
    double dnum = 5.5;

    cout <<wnum+dnum<<endl;
    
    wnum++;
    cout<<wnum<<endl;

    wnum--;
    cout<<wnum<<endl;

    wnum+=80;
    cout<<wnum<<endl;

    cout<<10/3<<endl;
    cout<<10.0/3.0<<endl;

    cout<<"-----------------------------------------"<<endl; // -----------

    // use cmath function
    cout<<pow(2,5)<<endl;
    cout<<sqrt(36)<<endl;
    cout<<round(3.142)<<endl;
    cout<<floor(4.5)<<endl;
    cout<<fmax(3,10)<<endl;
    cout<<fmin(3,10)<<endl;

    cout<<"-----------------------------------------"<<endl; // -----------
    
    return 0;
}
