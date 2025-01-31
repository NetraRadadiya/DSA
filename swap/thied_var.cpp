#include<iostream>
using namespace std;

int main(){
	
	int num1= 5;
	int num2= 10;
	int temp= num1;
	
	num1 = num2;
	num2 = temp;
	
	cout << num1 << endl << num2;
	
	return 0;
}