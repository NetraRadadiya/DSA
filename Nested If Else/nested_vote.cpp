#include<iostream>
using namespace std;

int main()
{
	
	int age;
	cout << "Enter your age:";
	cin >> age;
	
	if(age>=18)
	{
		if(age>100)
		{
			cout << "enter your age within 100";
		}
		else
		{
			cout << "you are eligible for vote";
		}
	}
	
	else
	{
		if(age<=0)
		{
			if(age==0){
				cout << "zero is not age";
			}
			else
			{
				cout << "negetive age is not allowed";
			}
		}
		else
		{
			cout << "you are not eligible for vote";
		}
		
	}
	return 0;
}