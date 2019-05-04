#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float t;

    cout << "Press any number" << endl;
    cin >> t;

    for (float i = 1; i <= 10; ++i) 
	{
        cout << t << " * " << i << " = " << t * i << endl;
    }
    
    return 0;
}

