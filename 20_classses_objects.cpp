#include <iostream>
using namespace std;

class Book {  //---Class----
    public:
        string title;
        string author;
        int pages;
        //class-->specifications/blueprint of an object
}; //---Class----

int main()
{
    cout<<"-----------------------------------------"<<endl; // -----------

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 300;

    cout<<book1.title<<endl;
    cout<<book1.author<<endl;
    cout<<book1.pages<<endl;

    cout<<"-----------------------------------------"<<endl; // -----------

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkien";
    book2.pages = 250;

    cout<<book2.title<<endl;
    cout<<book2.author<<endl;
    cout<<book2.pages<<endl;

    cout<<"-----------------------------------------"<<endl; // -----------
    
    return 0;
}