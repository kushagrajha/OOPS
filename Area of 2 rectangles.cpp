
#include <iostream>

using namespace std;
int main()
{
	double firstRectangleW, firstRectangleL;
	double secondRectangleW, secondRectangleL;

	cout << "Please enter the lenght and width of the first rectangle:" << endl;
	cin >> firstRectangleL >> firstRectangleW;
	cout << "Please enter the lenght and width of the second rectangle:" << endl;
	cin >> secondRectangleL >> secondRectangleW;

	if ((firstRectangleL * firstRectangleW) > (secondRectangleL * secondRectangleW))
		cout << "Area of first rectangle is greater than area of the second rectangle." << endl;
	else if ((firstRectangleL * firstRectangleW) < (secondRectangleL * secondRectangleW))
		cout << "Area of first rectangle is smaller than area of the second rectangle." << endl;
	else
		cout << "Are of first rectnagle is the same as area of the second rectangle." << endl;
	return 0;
}