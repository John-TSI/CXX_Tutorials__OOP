#include<iostream>
#include"../include/person.hpp"

using std::cout, std::endl;

// --- constructors ---
 Person::Person()
{
    cout << "A person has been constructed." << endl;
} 
Person::Person(string input) : name(input) 
{
    cout << "Generic person " << name << " has been constructed." << endl;
}

void Person::WriteProgram()
{
    cout << name << " is unable to write a program." << endl;
}