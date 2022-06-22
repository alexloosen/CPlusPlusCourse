#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double> numbers(0);

	cout << numbers.size() << endl;

	int capacity = numbers.capacity();

	for (int i = 0; i < 10000; i++)
	{
		if (numbers.capacity() != capacity)
		{
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		numbers.push_back(i);
	}

	//numbers.resize(100);
	numbers.reserve(100000);
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << capacity << endl;

	return 0;
}