#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(string aTitle, string aAuthor, int aPages){  //---Constructor Func Start----
            title = aTitle;
            author =aAuthor;
            pages = aPages;

            cout<<"-----------------------------------------"<<endl; // -----------
            cout<<"Title : "<<aTitle<<endl;
            cout<<"Author : "<<aAuthor<<endl;
            cout<<"Pages: "<<aPages<<endl;
        } //---Constructor Func End----

        Book(){  //---Constructor Func Start----
           title = "No title";
            author ="No Author";
            pages = 0;

            cout<<"-----------------------------------------"<<endl; // -----------
            cout<<"Tittle : "<<title<<endl;
            cout<<"Author : "<<author<<endl;
            cout<<"Pages: "<<pages<<endl; 
        } //---Constructor Func End----
};

int main()
{
    Book book1("Harry Potter", "JK Rowling", 300);
    Book book2("Lord of the Rings", "Tolkien", 250);
    Book book3;

    cout<<"-----------------------------------------"<<endl; // -----------
    book1.title = "Potter H.";
    cout<<book1.title<<endl;

    return 0;
}