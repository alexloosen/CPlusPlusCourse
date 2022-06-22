#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)
struct Person
{
	char name[50];
	int age;
	double height;
};
#pragma pack(pop)

int main()
{
	Person someone = { "Frodo", 220, 0.8 };

	string fileName = "test.bin";

	// write binary file //

	ofstream ofile;

	ofile.open(fileName, ios::binary);
	if (ofile.is_open())
	{
		ofile.write(reinterpret_cast<char*>(&someone), sizeof(Person));
		ofile.close();
	}
	else
	{
		cout << "Could not create file " << fileName << endl;
	}
	
	// read binary file //
	Person someoneElse = {};
	ifstream ifile;

	ifile.open(fileName, ios::binary);
	if (ifile.is_open())
	{
		ifile.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));
		ifile.close();
	}
	else
	{
		cout << "Could not read file " << fileName << endl;
	}

	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;
	return 0;
}