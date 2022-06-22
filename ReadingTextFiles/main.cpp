#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string fileName = "test.txt";
	ifstream inFile;

	inFile.open(fileName);

	if (inFile.is_open())
	{
		string line;

		while (inFile)
		{
			getline(inFile, line);
			cout << line << endl;
		}
		inFile.close();
	}
	else
	{
		cout << "Cannot open file: " << fileName << endl;
	}
	cout << "Still running!" << endl;
	return 0;
}