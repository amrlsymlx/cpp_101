#include <iostream>

using namespace std;

double cube(double num){
    double result = num*num*num;
    return result;
    // try comment line 7
}

int main()
{
     
    cout<<cube(5.0);

    return 0;
}
