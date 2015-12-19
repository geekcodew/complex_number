#include "complex_number.h"

namespace std
{

	complex_number::complex_number(void)
	{
	}

	void complex_number::setReal(double u_real)
	{
		real = u_real;
	}

	double complex_number::Re()
	{
		return real;
	}
	
	void complex_number::setImaginary(double u_im)
	{
		imaginary = u_im;
	}

	double complex_number::Im()
	{
		return imaginary;
	}

	complex_number::~complex_number(void)
	{
	}
}