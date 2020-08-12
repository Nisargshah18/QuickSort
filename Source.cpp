#include <iostream>
using namespace std;
void quickSort(int *array, int left, int right);
void printArray(int *array, int n);

int main() {

	const int size = 10;
	int array[size];

	int n = sizeof(array) / sizeof(array[0]);
	cout << "Please enter any 10 numbers you want to QuickSort: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
		
	}
	cout << "Before sorting: " << endl;
	printArray(array, n);

	quickSort(array, 0, n-1);
	

	cout << "After sorting: " << endl;
	printArray(array, n);
	return 0;

}
void quickSort(int *array, int left, int right) {

	int i = left; 
	int j = right;

	int temp;

	int pivot = array[(left + right) / 2];


	while (i <= j) {

		while (array[i] < pivot)
		{
			i++;
		}
		while (array[j] > pivot)
		{
			j--;
		}
		if (i <= j) {

			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;

		}

	}

	if (j > left)
	{
		quickSort(array, left, j);
	}
	if (i < right)
	{
		quickSort(array, i, right);
	}
}

void printArray(int *array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << endl;
	}
}
