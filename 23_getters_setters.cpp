#include <iostream>
using namespace std;
class Movie{
    private: //only code inside class can access 
        string rating;

    public:
        string title;
        string director;
        
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            rating = aRating;
            setRating(aRating);
        }

        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating =aRating;
            } else {
                rating = "NR";
            }
        }

        string getRating (){
            return rating;
        }
};

int main()
{
    Movie avengers("The Avengers", "Josh Whedon", "PG-13");

    //Valid rating is G, PG, PG-13, R, NR 

    avengers.setRating("Dog"); //will get NR

    cout<<avengers.getRating();

    
    return 0;
}