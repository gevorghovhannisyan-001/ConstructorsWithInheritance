#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{
   /* Person person1("John Doe", 30, "123 Main St");
    std::cout << "person1 : " << person1 << std::endl;*/

	/*std::cout << "------------------------------" << std::endl;
	Engineer engineer1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12);
	std::cout << "engineer1 : " << engineer1 << std::endl;*/

	std::cout << "------------------------------" << std::endl;
	CivilEngineer civilEngineer1("Alice Johnson", 35, "456 Elm St", 8, "Bridge Construction");
	std::cout << "civilEngineer1 : " << civilEngineer1 << std::endl;

    return 0;
}