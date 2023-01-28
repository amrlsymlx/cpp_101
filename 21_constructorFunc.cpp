#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author =aAuthor;
            pages = aPages;

            cout<<"-----------------------------------------"<<endl; // -----------
            cout<<"Title : "<<aTitle<<endl;
            cout<<"Author : "<<aAuthor<<endl;
            cout<<"Pages: "<<aPages<<endl;
        }

        Book(){
           title = "No title";
            author ="No Author";
            pages = 0;

            cout<<"-----------------------------------------"<<endl; // -----------
            cout<<"Tittle : "<<title<<endl;
            cout<<"Author : "<<author<<endl;
            cout<<"Pages: "<<pages<<endl; 
        }
};

int main()
{
    Book book1("Harry Potter", "JK Rowling", 300);
    Book book2("Lord of the Rings", "Tolkien", 250);
    Book book3;

    cout<<"-----------------------------------------"<<endl; // -----------
    book1.title = "Potter H.";
    cout<<book1.title<<endl;
    // cout<<book1.author<<endl;
    // cout<<book1.pages<<endl;


    // cout<<"____________\n"<<endl; // -----------


    // cout<<book2.title<<endl;
    // cout<<book2.author<<endl;
    // cout<<book2.pages<<endl;


    // cout<<"____________\n"<<endl; // -----------

    return 0;
}