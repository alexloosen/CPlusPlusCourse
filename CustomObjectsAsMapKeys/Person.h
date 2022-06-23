#include <iostream>
#include <map>
using namespace std;

class Person
{
	private:
	string name;
	int age;

	public:
	Person(): name(""), age(0) {}

	Person(const Person& other)
	{
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) : name(name), age(age){}

	bool operator<(const Person& other) const
	{
		if (name == other.name)
			return age < other.age;
		return name < other.name;
	}


	void print() const
	{
		cout << name << ": " << age << flush;
	}
};

