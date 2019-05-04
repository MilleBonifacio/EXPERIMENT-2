#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	float D;
	//

	cout << "Enter value for a" << endl;
	cin >> a;
	
	cout << "Enter value for b" << endl;
	cin >> b;
	//
	

	switch(a)
	{
		case 1:
			if (a==1 && 1<b<5)
			D = a * b * 2.5;
			else if (a==1 && b>=5)
			D = a + b/2.5;
			break;
		
		case 2:
			if (a==2 && b<=5)
			D = abs((a - b) / 2.5);
			else if (a==2 && b>5)
			D = a - sqrt(b + 2.5);
			break;
			
		default:
			D = a + b + 2.5;
			break;
					
		}
		cout << setw(10);
		cout << fixed;
		cout << setprecision(2);
		cout << D;
		    return 0;
		}
