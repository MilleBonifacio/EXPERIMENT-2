#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
    int t;
    int v;

    cout << "How many rows do you want?";
    cin >> t;
    cout << "How many columns do you want?";
    cin >> v;
    
    for (int row = 1; row <= t; ++row) 
    {
        for (int col = 1; col <= v; ++col) 
        {
            cout << "* ";
	    }
        cout << endl;
    }
    getch();
    return 0;
    
}
