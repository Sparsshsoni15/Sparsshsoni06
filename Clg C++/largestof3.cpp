#include <iostream>
using namespace std;
int main()
{

	// To find the largest number

	int a, b, c;
	cout << "Enter three numbers: ";
	cin >> a >> b >> c;

	if (a > b && a > c)
	{
		cout << "Largest no.= " << a << endl;
	}
	else if (b > a && b > c)
	{
		cout << "Largest no.= " << b << endl;
	}
	else
	{
		cout << "Largest no.= " << c << endl;
	}

	return 0;
}
