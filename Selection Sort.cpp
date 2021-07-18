#include <iostream>
#include <locale.h>
using namespace std;

void selection_sort(int v[], int x)
{
	int memoria;
	for(int i = 0; i < x - 1; i++)
	{
		for(int j = i + 1; j < x; j++)
		{
			cout << "[" << j << "]: " << v[j - 1] << ", [" << j + 1 << "] : " << v[j] << endl;

			if(v[i] > v[j] )
			{
				memoria = v[i];
				v[i] = v[j];
				v[j] = memoria;
			}
		}
		cout << "------------------" << endl;
	}
}

void print (int y , int *u)
{
	for(int i = 0; i < y; i++)
	{
		cout << i + 1 << "° valor: " << u[i] << endl;
	}
	cout << "------------------" << endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int v[10] = {4, 7, 2, 5, 0, 1, 6, 9, 3, 8};
	cout << "------------------" << endl;
	cout << "--Selection Sort--" << endl;
	cout << "------------------" << endl;
	selection_sort(v, 10);
	print(10, v);
	return 0;
}
