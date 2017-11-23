#include "stdafx.h"
#include <iostream>
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

//y = 0, 7(1 / x + ln(x)) 
	//x nach = -4 
	//x conech =14 
	//dx =2.5

float f(float x)

{
	return
		0.7*(1 / x + log(x));

}


int main()
{
	system("color 0A");
	float y, n1, n2, dx;
	cout << " BBODiM kraynie znacheniya n1,n2 i znacehie priropsheniya x" << endl;
	cin >> n1 >> n2 >> dx;
	y = 0;
	if (n1 >= n2)
	{
		system("color C0");
		cout << "Proverit' ODZ peremennoy x " << endl;
		system("pause");
		return 1;
	}
	cout << "X" << "\t" << "Y" << endl;
	for (float i = n1; i <= n2; i += dx)
	{
		cout  << i << "\t" << f(i) << endl;
	}
	system("pause");
	return 0;
}

