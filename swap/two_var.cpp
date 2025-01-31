#include<iostream>
using namespace std;

int main(){
	
	int x=30;
	int y=20;
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	cout << "X = " << x << endl;
	cout << "Y = "  << y;
	
	return 0;
}