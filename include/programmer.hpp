#ifndef PROGRAMMER_HPP
#define PROGRAMMER_HPP

#include<string>
#include<vector>
#include"person.hpp"

using std::string, std::vector;


class Programmer : public Person
{
    // --- attributes ---
    private:
        float salary = 0.0f;
    public:
        string name = "P. R. O'Grammer";
        bool isEmployed = true;
        string employer;
        vector<string> knownLangs = {"C", "C++", "Python", "R", "Wolfram"};
        string faveLang = "Python";
        string faveEditor = "VScode";


        // ------ method prototypes ------

        // --- constructors ---
        Programmer();
        Programmer(string);

        // --- getters/setters ---
        float GetSalary();
        void SetSalary(float);

        // --- other methods ---
        string GetLangs(vector<string>);
        void PlanProject();
        void WriteProgram();
        void BuildProgram();
        void Debug();
        void ConsultDocumentation();
        void DrinkCoffee(float);
        void Cry();
};

#endif
