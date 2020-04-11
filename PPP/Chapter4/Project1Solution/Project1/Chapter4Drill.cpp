#include "..//..//..//std_lib_facilities.h"

int main()
{
	constexpr double cm_per_inch = 2.54;

	double length = 1;
	char unit = 'a';

	cout << "Please enter a length followed by Unit c for cm or i for inch" << endl;
	cin >> length >> unit;

	switch (unit)
	{
	case 'i':
		cout << length << "in == " << cm_per_inch * length << "cm" << endl;
	case 'c':
		cout << length << "cm == " << length / cm_per_inch << "in" << endl;
	default:
		cout << "Sorry i dont know what unit that is " << unit << endl;
		break;
	}

	return 0;
}