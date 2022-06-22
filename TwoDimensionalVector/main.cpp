#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector< vector<int> > grid(3, vector<int>(4, 0));

	int base = 12;
	int mult = 1;
	for (int row = 0; row < grid.size(); row++)
	{
		for (int col = 0; col < grid[row].size(); col++)
		{
			grid[row][col] = ((1 + col) + (row * grid[row].size())) * base;
			cout << grid[row][col] << "\t" << flush;
			mult++;
		}
		cout << endl;
	}
	return 0;
}