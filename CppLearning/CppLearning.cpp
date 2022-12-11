#include <iostream>

using namespace std;

int main()
{

	cout << "agirlik giriniz:";
	double a, mars, jupiter;
	cin >> a;
	mars = a * 0.377;
	jupiter = a * 2.36;
	cout << "jupiter:" << jupiter << endl;
	cout << "mars:" << mars;

	//*************//

	int j = 0;
	int a = 0;
	for (int i = 0; i < 4; i++)
	{
		a += 2;
		for (j; j < 7; j++)
		{
			cout << "*";
		}
		j = a;
		cout << endl;
	}



}

