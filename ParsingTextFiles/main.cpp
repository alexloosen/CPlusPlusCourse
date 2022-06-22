#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string fileName = "stats.txt";
	ifstream input;

	input.open(fileName);

	if (!input.is_open())
		return 1;

	while (input)
	{
		string line = "";

		getline(input, line, ':');

		line.erase(remove(line.begin(), line.end(), '\n'), line.end());
		if (line == "")
		{
		//	input >> ws;
			continue;
		}

		int population;
		input >> population;

		cout << "'" << line << "'" << " -- " << "'" << population << "'" << endl;
	}

	input.close();
	cout << "Still running!" << endl;
	return 0;
}