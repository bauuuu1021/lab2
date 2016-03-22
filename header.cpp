#include <iostream>
#include "a.h"
using namespace std;

double data::bmi (double height, double mass)
{
	return mass/height/height*10000;
}

string data::answer (double height, double mass)
{
	 double b;
	 b=data::bmi(height, mass);

	 if (b<15)
		 return "Very severely underweight";
	 else if (b<16.5)
		 return "Severely underweight";
	 else if (b<18.5)
		 return "Underweight";
	 else if (b<25)
		 return "Normal";
	 else if (b<30)
		 return "Overweight";
	 else if (b<35)
		 return "Obese Class I (Moderately obese)";
	 else if (b<40)
		  return "Obese Class II (Severely obese)";
	 else if (b>40)
		  return "Obese Class III (Very severely obese)";
}
