#include <iostream>
#include <string> 

using namespace std;

class Movie {
    
public:
    std::string Title;
    std::string Director;
    Movie(std::string aTitle, std::string aDirector) {
        Title = aTitle;
        Director = aDirector;
    }
    void Display(){
        cout << Title<<endl;;
    }
};

int main() {
    Movie movie = Movie("Harry Potter", "JK Rowling");
    Movie movie2 = movie;

    
    cout << "Movie 1:" << movie.Title<<endl;
    cout << "Movie 2:" << movie2.Title<<endl;
    return 0;
}
