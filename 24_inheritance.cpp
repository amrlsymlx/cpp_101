#include <iostream>
using namespace std;

class Chef {
    public:
        void makeChicken(){
            cout<<"The chef makes chicken"<<endl;
        }

        void makeSalad(){
            cout<<"The chef makes salad"<<endl;
        }

        void makeSpecialDish(){
            cout<<"The chef makes bbq ribs"<<endl;
        }
};

class ItalianChef : public Chef{   //inherit from Chef
    public:
        void makePasta(){  //add more class for ItalianChef
            cout<<"The chef make Pasta"<<endl;   
        }

        void makeSpecialDish(){  //append class for ItalianChef
            cout<<"The chef makes chicken parmesan."<<endl; //
        }
};

int main()
{
    cout<<"----------------- Chef ------------------------"<<endl; // -----------

    Chef chef;
    chef.makeChicken();
    // chef.makePasta();    //error
    chef.makeSpecialDish();

    cout<<"-----------------Italian Chef ------------------------"<<endl; // -----------

    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();
    italianChef.makeSpecialDish();

    
    return 0;
}