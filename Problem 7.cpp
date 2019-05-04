#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
int u, sum=0;
	do
	{
	cout<<"Please enter a number"<<endl;
	cin>> u;
		for(int i = 0; i <= u; i++)
		{
		sum+=i;
		}
	cout<<sum<<endl;
		}
		while(u>0);
	do{
	cout<<"Thank You So Much"<<endl;
	system("pause");
								
} 
while(u<=0);	
return 0;
}
