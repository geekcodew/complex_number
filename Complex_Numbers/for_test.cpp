#include <iostream>
#include <conio.h>
#include "complex_number.h"

using namespace std;

int main()
{
	complex_number z;
	z.setReal(5);
	z.setImaginary(3);
	cout << "z = " << z.Re() << "+" << z.Im() << "i" << endl;
	_getch();
	return 0;
}