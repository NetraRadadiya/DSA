#include<iostream>
using namespace std;

int main(){
	
	int a,b,c,d;
	cout << "Enter A :";
	cin >> a;
	cout << "Enter B :";
	cin >> b;
	cout << "Enter C :";
	cin >> c;
	cout << "Enter D :";
	cin >> d;
	
	if(a>b){
		if(a>c){
			if(a>d){
				cout << "A is Max";
			}
			else{
				cout << "D is Max";
			}
		}
		else{
			if(c>d){
				cout << "C is Max";
			}
			else
			{
				cout << "D is max";
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				cout << "B is Max";
			}
			else{
				cout << "D is Max";
			}
		}
		else{
			if(c>d)
			{
				cout << "C is max";
			}
			else
			{
				cout << "D is max";
			}
		}
	}
	
	return 0;
}
