#include <iostream>
using namespace std;
int main()
{
	int firstnum = 3;
	int const arr = 3;
	int const size = 4;
	int massive[size][arr];
	for (int i = 0; i < arr; i++)
	{
		for (int t = 0; t < size; t++)
		{
			if (t == 0 && i == 0)
			{
				massive[0][0] = firstnum;
				cout << massive[0][0] << " ";
			}
			else
			{
				massive[i][t] = massive[i][t - 1] * 2;
				cout << massive[i][t] << " ";
			}
		}
		cout << "\n";
	}
	cout << "\n"; cout << "\n";
	int firstnum2 = 3;
	int const arr2 = 3;
	int const size2 = 4;
	int massive2[size2][arr2];
	for (int i = 0; i < arr2; i++)
	{
		for (int t = 0; t < size2; t++)
		{
			if (t == 0 && i == 0)
			{
				massive[0][0] = firstnum;
				cout << massive[0][0] << " ";
			}
			else
			{
				massive[i][t] = massive[i][t - 1] + 1;
				cout << massive[i][t] << " ";
			}
		}
		cout << "\n";
	}
}
