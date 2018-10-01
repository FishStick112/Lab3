//Matthew Sundberg
//COSC 2030-01
//Lab 3

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	short nShort, shortSum = 0;
	long nLong, longSum = 0;
	float floatSum = 1, nFloat = 0;
	double doubleSum = 1, nDouble;

	cout << "Enter a number : ";
	cin >> nShort;

	for (short i = 0; i <= nShort; i++)
	{
		shortSum = shortSum + i;
	}

	cout << "The number is : " << nShort << endl << "With a sum of : " << shortSum << endl;
	cout << "The value that produces the short overflow is 256." << endl << endl;

	cout << "Enter a number : ";
	cin >> nLong;

	for (long i = 0; i <= nLong; i++)
	{
		longSum = longSum + i;
	}

	cout << "The number is : " << nLong << endl << "With a sum of : " << longSum << endl;
	cout << "The value that produces the long overflow is 65536." << endl << endl;

	cout << "Enter a number : ";
	cin >> nLong;

	for (long i = 1; i <= nLong; i++)
	{
		floatSum = floatSum * i;
	}

	cout << "The number is : " << nLong << endl << "With a sum of : " << floatSum << endl;
	cout << "The value that produces the float overflow is 35." << endl << endl;

	cout << "Enter a number : ";
	cin >> nLong;

	for (long i = 1; i <= nLong; i++)
	{
		doubleSum = doubleSum * i;
	}

	cout << "The number is : " << nLong << endl << "With a sum of : " << doubleSum << endl;
	cout << "The value that produces the double overflow is 171." << endl << endl;

	floatSum = 1;
	doubleSum = 1;
	cout << "Enter a number : ";
	cin >> nFloat;

	for (float i = 1; i <= nFloat; i++)
	{
		floatSum = floatSum + (1 / i);
	}
	floatSum--;

	cout << "The number is : " << nFloat << endl << "With a sum of : " << floatSum << endl;

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	system("pause");
	return 0;
}