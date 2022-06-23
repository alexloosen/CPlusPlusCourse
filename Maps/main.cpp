#include <iostream>
#include <map>
using namespace std;

void insert(map<string, int>& ages, string name, int age)
{
	ages.insert(make_pair(name, age));
}

void changeVal(map<string, int>& ages, string name, int newAge)
{
	if (ages.find(name) != ages.end())
	{
		ages[name] = newAge;
	}
}

void remove(map<string, int>& ages, string name)
{
	if (ages.find(name) != ages.end())
	{
		ages.erase(name);
	}
}

int main()
{
	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	cout << ages["Sue"] << endl;

	changeVal(ages, "Raj", 25);

	remove(ages, "Sue");

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		cout << "Name: " << it->first << " Age: " << it->second << endl;
	}
	return 0;
}