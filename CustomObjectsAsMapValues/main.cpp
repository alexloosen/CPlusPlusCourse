#include "Person.h"

int main()
{
	map<int, Person> people;

	people[50] = Person("Mike", 40);
	people[21] = Person("Raj", 30);
	people[1] = Person("Vicky", 20);

	people.insert(make_pair(55, Person("Bob", 45)));
	people.insert(make_pair(56, Person("Sue", 24)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->first << ": " << flush;
		it->second.print();
	}
	return 0;
}