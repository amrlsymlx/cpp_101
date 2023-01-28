#include <iostream>

using namespace std;

int main()
{
    cout<<"____________\n"<<endl; // -----------


    int luckyNums[] = {4, 8, 15, 16, 23, 42};

    cout<<luckyNums[0]<<endl;
    cout<<luckyNums[1]<<endl;
    cout<<luckyNums[2]<<endl;
    cout<<luckyNums[3]<<endl;

    luckyNums[0] = 19;
    cout<<luckyNums[0]<<endl;


    cout<<"____________\n"<<endl; // -----------


    int luckyNums1[20] = {4, 8, 15, 16, 23, 42};

    luckyNums1[10] = 100;
    cout<<luckyNums1[10]<<endl;
    

    cout<<"____________\n"<<endl; // -----------


    int luckyNums2[20];

    luckyNums2[9] = 77;
    cout<<luckyNums2[9]<<endl;

    

    cout<<"____________\n"<<endl; // -----------


    return 0;
}
