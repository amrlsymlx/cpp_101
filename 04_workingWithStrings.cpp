#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello!\n";
    cout<<"Amir"<<endl;

    string phrase = "Giraffe Academy";
    cout<<phrase.length()<<endl;
    cout<<phrase[1]<<endl;

    phrase[1] = 'o';
    cout<<phrase<<endl;

    cout<<phrase.find("Academy", 0)<<endl;
    
    string phrasesub = phrase.substr(8,3);
    cout<<phrasesub<<endl;

    // cout<<phrase.substr(8, 3)<<endl;

    
    return 0;
}