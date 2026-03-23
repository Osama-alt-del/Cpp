/* This is a file I'm going to  use as the main file to practice a bunch of OOP and stuff like that. */
#include <iostream>
#include <string> /* we can use this to work with strings a little bit nicely(?) */

/* Declare the subject here */
class Person{
    private:
        std::string first;
        std::string last;
    public: 
    
    // This is a method
    void printFullName(){
        std::cout<<first<<" "<<last<<std::endl;
    }
    // Setters:
    void setFirstName(std::string first){
        this->first = first;
    }
    void setLastName(std::string last){
        this->last = last;
    }
};

int main(){
    Person p; /* This is how we instantiate a person */ 
    
    // So this is encapsulation
    p.setFirstName("Osama");
    p.setLastName("Abd-Alghany");

    p.printFullName();

    return 0;
}

