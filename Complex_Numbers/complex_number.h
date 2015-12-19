#pragma once

namespace std
{
	class complex_number
	{
	private:
		double real;
		double imaginary;
	public:
		complex_number(void);
		void setReal(double);
		double Re();
		void setImaginary(double);
		double Im();
		~complex_number(void);
	};

}