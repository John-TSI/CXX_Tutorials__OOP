#include<iostream>
#include<vector>
#include"../include/person.hpp"
#include"../include/programmer.hpp"

using std::string, std::vector, std::cout, std::cin, std::endl;


// ------ method definitions ------

// --- constructors ---
Programmer::Programmer()
{
    cout << "A programmer has been constructed." << endl;
}
Programmer::Programmer(string input) : name(input) 
{
    cout << "Programmer " << name << " has been constructed." << endl;
}


// --- getters/setters ---
float Programmer::GetSalary()
{
    return salary;
}
void Programmer::SetSalary(float input)
{
    salary = input;
}


// --- other methods ---
string Programmer::GetLangs(vector<string> vec)
{   
    string str = "";
    for(string item : vec){ str += item + " "; }
    return str;
}
void Programmer::PlanProject()
{
    cout << name << " is planning a project." << endl;
}
// overriding a method 
void Programmer::WriteProgram()
{
    cout << name << " is writing a program." << endl;
}
void Programmer::BuildProgram()
{
    cout << "Makefiles have been generated, source files have been compiled." << endl;
}
void Programmer::Debug()
{
    cout << "Detected: 4 bugs and 21 warnings" << endl;
}
void Programmer::ConsultDocumentation()
{
    cout << name << " has consulted the documentation." << endl;
}
void Programmer::DrinkCoffee(float litres = 2.0)
{
    cout << litres << " litres of coffee have been consumed by " << name << "."  << endl;
}
void Programmer::Cry()
{
    cout << name << " is currently crying." << endl;
}