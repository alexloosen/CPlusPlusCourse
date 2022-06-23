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
		cout << "Copy constructor running!" << endl;
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) : name(name), age(age){}

	void print()
	{
		cout << name << ": " << age << endl;
	}
};

