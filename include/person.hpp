#ifndef PERSON_HPP
#define PERSON_HPP

#include<string>

using std::string;


class Person
{
	public:
		string name = "P. Erson";
		string faveLang = "Welsh";

        // --- constructors ---
        Person();
        Person(string);

		// --- other methods ---
		void WriteProgram();
};

#endif
