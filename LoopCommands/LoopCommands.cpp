using namespace std;
#include <iostream>

int main()
{
	cout << "Tamsayi giriniz: ";
	double n;
	cin >> n;
	double result = 1;
	double j = 3;
	for (int i = 0; i < (n-1)/2; i++) {
		
			if (i % 2 == 0)
			{
				result = result - (1 / j);
			}
			else {
				result = result + (1 / j);
			}
		
			j += 2;
	}
	cout << "sonuc: " << result;

}

