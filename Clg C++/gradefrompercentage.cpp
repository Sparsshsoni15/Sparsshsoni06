#include <iostream>
using namespace std;
int main()
{
	// To find grade through percentage

	int a, b, c, d, e;
	cout << "Enter five subject marks: ";
	cin >> a >> b >> c >> d >> e;
	int n;
	n = (a + b + c + d + e) / 5;
	if (n >= 90)
	{
		cout << "A" << endl;
	}
	else if (n >= 75 && n <= 89)
	{
		cout << "B" << endl;
	}
	else if (n >= 60 && n <= 74)
	{
		cout << "C" << endl;
	}
	else if (n >= 40 && n <= 59)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "Fail" << endl;
	}
	return 0;
}
