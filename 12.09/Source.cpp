#include <iostream>
#include "Math.h"
using namespace std;

int main() 
{
	int a, b, c, d;
	int j = 3;
	int firstPoly[4];
	for (int i = 0; i < 4; i++, j--) 
	{
		cout << "enter number :)\n";
		cin >> firstPoly[i]; 
		cout << firstPoly[i] << "x^" << j << "\n"; 
		
	}
	cout << "\n";
	cout << "your poly:\n";
	int j2 = 3;
	for (int i = 0; i < 3; i++, j2--) 
	{
		cout << firstPoly[i] << "x^" << j2 << " + ";
	}
	cout << firstPoly[3];
	cout << "\n";
	cout << "\n";

	int a2, b2, c2, d2;
	int k = 3;
	int secondPoly[4];
	for (int i = 0; i < 4; i++, k--) 
	{
		cout << "more numbers :3\n";
		cin >> secondPoly[i];
		cout << secondPoly[i] << "x^" << k << "\n";
	}
	cout << "\n";
	cout << "and the second one:\n";
	int k2 = 3;
	for (int i = 0; i < 3; i++, k2--) 
	{
		cout << secondPoly[i] << "x^" << k2 << " + ";
	}
	cout << secondPoly[3];




	return 0;
}