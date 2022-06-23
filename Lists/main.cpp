#include <iostream>
#include <list>
using namespace std;

void insertAt(list<int> &numbers, int pos, int element)
{
	list<int>::iterator it = numbers.begin();

	advance(it, pos);

	numbers.insert(it, element);
	return;
}

void eraseAt(list<int> &numbers, int pos)
{
	list<int>::iterator it = numbers.begin();

	advance(it, pos);

	numbers.erase(it);
	return;
}

int main()
{
	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(4);

	numbers.push_front(0);

	insertAt(numbers, 3, 3);

	eraseAt(numbers, 4);

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl;
	}
	return 0;
}