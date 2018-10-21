//10 elements array sorting
#include<iostream>
#include<ctime>
using namespace std;

void selectSort(int a[], int size, int key = 1);

int main()
{
	srand(time(0));
	int key;
	int size = 10;
	int ar[10];
	cout << "Lets sort below array by descending and ascending way..." << endl;
	for (int i = 0; i < size; i++)
		ar[i] = rand() % 90 + 10;

	for (int i = 0; i < size; i++)
		cout << ar[i] << "\t";
	cout << endl;
	cout << "Array sorted by default descending way..." << endl;
	selectSort(ar, size);
	cout << endl;
	cout << "Input 1 if you wish to sort by descending way and 0 - by ascending way..." << endl;
	cin >> key;
	selectSort(ar, size, key);

	return 0;
}


void selectSort(int a[], int size, int key)
{
	int i, j, k;
	int x;

	if (key != 0 && key != 1)
		cout << "Try to input digits 1 or 0!" << endl;

	else if (key == 1)
	{
		for (i = 0; i < size; i++)
		{
			k = i, x = a[i];
			for (j = i + 1; j < size; j++)
				if (a[j] > x)
				{
					k = j;
					x = a[j];
				}

			a[k] = a[i];
			a[i] = x;
		}
		for (int i = 0; i < size; i++)
			cout << a[i] << "\t";
		cout << endl;
	}

	else if (key == 0)
	{
		for (i = 0; i < size; i++)
		{
			k = i, x = a[i];
			for (j = i + 1; j < size; j++)
				if (a[j] < x)
				{
					k = j;
					x = a[j];
				}

			a[k] = a[i];
			a[i] = x;
		}
		for (int i = 0; i < size; i++)
			cout << a[i] << "\t";
		cout << endl;
	}

}