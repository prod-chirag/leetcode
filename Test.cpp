#include <iostream>
using namespace std;
class Person{
    private:
    string name;

    public:
    Person(string gname){
        name = gname;
    }
};

int main(){
    Person* chirag = new Person("chirag");


}