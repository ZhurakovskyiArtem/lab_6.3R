#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
using namespace std;
template <typename T>
T Create(T* a, T size, T i)
{
	a[i] = 0 + rand() % (100 + 1);
	if (i < size - 1)
		Create1(a, size, i + 1);
}
void Create(int* a, int size, int i)
{
	a[i] = 0 + rand() % (100 + 1);
	if (i < size - 1)
		Create(a, size, i + 1);
}
template <typename T>
T Print(T* a, T size, T i)
{
	cout << setw(2) << a[i] << " ";
	if (i < size - 1)
		Print(a, size, i + 1);
}
void Print(int* a, int size, int i)
{
	cout << setw(2) << a[i] << " ";
	if (i < size - 1)
		Print(a, size, i + 1);
}
template <typename T>
T Sort(T* a, const T size, T i, T j) 
{
	if (a[j] > a[j + 1]) 
	{ 
		int tmp = a[j];
		a[j] = a[j + 1];
			a[j + 1] = tmp;
	}
	if (j < size - i - 1) 
		Sort(a, size, i, j + 1); 

	if (i < size - 1) 
		Sort(a, size, i + 1, 0); 
}
void Sort(int* a, const int size, int i, int j) 
{
	if (a[j] < a[j + 1]) 
	{ 
		int tmp = a[j];
		a[j] = a[j + 1];
			a[j + 1] = tmp;
	}
	if (j < size - i - 1) 
		Sort(a, size, i, j + 1); 

	if (i < size - 1) 
		Sort(a, size, i + 1, 0); 
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 5;
	int a[n];
	Create(a, n, 0);
	cout << "a[";
	Print(a, n, 0);
	cout << "]" << endl;
	Sort(a, n, 1, 0);
	cout << "a[";
	Print(a, n, 0);
	cout << "]" << endl;
	Create(a, n, 0);
	cout << "a[";
	Print(a, n, 0);
	cout << "]" << endl;
	Sort(a, n, 1, 0);
	cout << "a[";
	Print(a, n, 0);
	cout << "]" << endl;
	return 0;
}