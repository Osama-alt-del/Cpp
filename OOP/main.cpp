/* This is a file I'm going to  use as the main file to practice a bunch of OOP and stuff like that. */
#include <iostream>
#include <string> /* we can use this to work with strings a little bit nicely(?) */

// Instead of std::string*, I'm going to try and use std::string
/* Declare the subject here */
class Person{
    private:
        std::string first;
        std::string last;
    public: 
    Person(std::string first, std::string last):first(first), last(last) {}
    
    // Setters:
    void setFirstName(std::string first){
        this->first = first;
    }

    void setLastName(std::string last){
        this->last = last;
    }

    std::string getName(){
        return first + " " + last;
    }
};

int main(){
    Person p = Person("Osama", "Abd-Alghany"); /* This is how we instantiate a person */ 
    std::cout<<p.getName()<<std::endl;
    return 0;
}

