#include <iostream>
using namespace std;
int main()
{
	char not1 = 'A';

	switch (not1){
	case 'A': case 'B': cout << "tebrikler"; break;
	case 'C':case 'D': cout << "gecemedin"; break;
	default:cout << "kaldın";
		break;
	}

	
}
