#include<iostream>
#include<list>
#include<ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	list <int> spisoc;
	int n;
	cout << "Введите количество элементов списка: ";
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		spisoc.push_back(rand() % 20);			
	}
	
	list<int>::iterator ib = spisoc.begin();
	for (int i = 0; i < n; i++)
	{		
		cout << *ib << " ";
		ib++;
	}

	ib = spisoc.begin();
	for (int i = 0; i < n; i++)
	{	
		if (*ib < 10)
		{
			spisoc.remove (*ib);
			break;
		}
		ib++;
	}
	cout << endl;
	ib = spisoc.begin();
	for (int i = 0; i < n-1; i++)
	{
		cout << *ib << " ";
		ib++;
	}
}

