#include "Person.h"

int main()
{
	map<Person, int> people;

	people[Person("Mike", 40)]	= 0;
	people[Person("Mike", 444)] = 123;

	people[Person("Sue", 30)]	= 1;
	people[Person("Raj", 25)]	= 2;
	people[Person("Vicky", 20)] = 3;

	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	}
	return 0;
}