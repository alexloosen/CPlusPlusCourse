#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//ofstream outFile;
	fstream outFile;

	string outFileName = "text.txt";
	//outFile.open(outFileName);
	outFile.open(outFileName, ios::out);

	string lines[] = 
	{	"This is a line.",
		"This is another line.",
		"This is yet another line.",
		"Still writing lines...",
		"Are we done yet?",
		"*sigh*",
		"Ok we're done here."
	};

	if (outFile.is_open())
	{
		for (int i = 0; i < sizeof(lines)/sizeof(lines[0]); i++)
		{
			outFile << i+1 << ". " << lines[i] << endl;
		}
		outFile.close();
	}
	else
	{
		cout << "Could not create file: " << outFileName << endl;
	}

	cout << "Still running!" << endl;

	return 0;
}