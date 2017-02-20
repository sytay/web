#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	double fa, fb, sum = 0;
	cout << "nhap vao a: ";
	cin >> fa;
	cout << "nhap vao b: ";
	cin >> fb;
	for (double i = fb; i >= fa; i--)
	{
		sum += i;
	}
	cout << "\nket qua: " << sum;
	return 0;
}