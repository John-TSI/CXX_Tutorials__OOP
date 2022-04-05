#include<iostream>
#include"../include/person.hpp"
#include"../include/programmer.hpp"

using std::string, std::cout, std::cin, std::endl;


int main()
{   system("cls");

    Person pers1("Arnold");
    pers1.WriteProgram();

    Programmer prog1("Jimmy");
    prog1.DrinkCoffee(7.2);
    prog1.WriteProgram();
    prog1.SetSalary(17.22);
    cout << prog1.name << " earns " << prog1.GetSalary() << "." << endl;
    cout << prog1.name << " knows the following languages: " << prog1.GetLangs(prog1.knownLangs);

    return 0;
}