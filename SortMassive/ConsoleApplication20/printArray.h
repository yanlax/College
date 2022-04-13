using namespace std;

void printArray(int array[], int size)
{
	cout << "\nВ массиве содержатся следующие элементы:\n" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << array[i] << endl;
	}
}
