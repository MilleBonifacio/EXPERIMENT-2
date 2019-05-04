#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	float l, m, n;
	
	cout << "Input first number" << endl;
	cin >> l;
	
	cout << "Input second number"<< endl;
	cin >> m;
	
	cout << "Input third number" << endl;
	cin >> n;
	
	if (l>n && l>m)
	cout << l << " is the largest number" << endl;
	else if (m>l && m>n)
	cout << m << " is the largest number" << endl;
	else if (n>l && n>m)
	cout << n << " is the largest number" << endl;
	else if (l==m && m==n && m==n)
	cout << "The numbers are of equal value" << endl;
	else
	cout << "repeat and make a correct input" << endl;
	
	return 0;
}
