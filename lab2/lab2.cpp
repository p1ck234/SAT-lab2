#include <algorithm> 
#include <vector> 
#include <cmath> 
#include <iostream> 
using namespace std;

int main()
{
	vector<double> sequence;
	vector<double>::iterator it;
	double k, a = 1, minimum = 0;
	int counter = 1;
	while (a != 0)
	{
		cin >> a;
		if (a == 0.0)
			break;
		else
		{
			counter++;
			sequence.push_back(a);
		}
	};
	if (a == 0 && counter == 1) 
	{ 
		cout << "Sequence is empty"; 
		exit(0); 
	}
	cin >> k;
	minimum = sequence.at(0);
	int size = sequence.size();
	for (int i = 0; i < size; i++) // поиск ближайшего число 
	{
		if (abs(sequence.at(i) - k) < abs(k - minimum)) // abs - математический модуль 
		{
			minimum = sequence.at(i);
		}
	}
	cout << endl << minimum; // вывод результата 
}