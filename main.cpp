#include <iostream>
#include "a.h"
#include <fstream>
using namespace std;

int main ()
{
	 data bmiii;
	 double height, weight, bmi;
	 ifstream filein("file.in");
	 ofstream fileout("file.out", ios::out);
	
	 while (filein>>height>>weight)
	 {
		 if (height==0&&weight==0)
			 break;

	 fileout<<bmiii.bmi(height, weight)<<"\t"<<bmiii.answer(height, weight)<<endl;
	 }
	 return 0;
}
