#include <iostream>
using namespace std;

int power (int baseNum, int powNum){ //---Exp func----
    int result = 1;
    for(int i=0; i<powNum; i++){
        result = result*baseNum;
    }
    return result;
} //---Exp func----

int main()
{
    
    cout<<power(2,3);
    
    return 0;
}