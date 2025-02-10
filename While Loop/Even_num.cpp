#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter Number :";
	cin >> n;
	
	while(n>=1)
	{
		if(n%2==0)
		{
			cout << n << " ";
		}
		n--;
	}
	
	return 0;
}