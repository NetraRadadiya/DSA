#include <iostream>
using namespace std;

int main(){
	
	float per;
	cout <<"Enetr The Percentage of The Student: ";
	cin >> per;
	
	if(per>=90)
	{
		cout << "student Grade: A+";
	}
	else if(per>=80)
	{
		cout << "student Grade: A";
	}
    else if(per>=70)
	{
		cout << "student Grade: B";
	}
	else if(per>=60)
	{
		cout << "student Grade: C";
	}
	else if(per>=50 || per>=40)
	{
		cout << "student Grade: D";
	}
	
	else 
	{
		cout << "Fail in Exam " << endl;
	}
}