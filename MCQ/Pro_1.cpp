#include<iostream>
using namespace std;

//series: 2, 1, (1/2), (1/4), ... 

int main()
{
	int num=2;
	
	for(int i=1; i<=10; i++)
	{
		cout << "1/" << num << " " ;
		num*=2;
	}
	
	return 0;
}