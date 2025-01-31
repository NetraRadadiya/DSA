#include<iostream>
using namespace std;

int main(){
	
	int x=10;
	int y=20;
	
	x=x*y;
	y=x/y;
	x=x/y;
	
	cout<<"x is: " << x << endl;
	cout<< "y is "<< y;  
	
	return 0;
}