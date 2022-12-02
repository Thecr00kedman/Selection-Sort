#include <iostream>
using namespace std;



int main() 
{
	int a[] = { 5,4,6,1,8 };
	int n = sizeof(a) / sizeof(int);
	int min = 0;

	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[min] > a[j])
			{
				min = j;

			}

		}
		int c = a[i];
		a[i] = a[min];
		a[min] = c;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
	return 0;
}

