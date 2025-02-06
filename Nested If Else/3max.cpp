#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	cout <<"enter a :";
	cin >> a;
	cout <<"enter b :";
	cin >> b;
	cout <<"enter c :";
	cin >> c;
	
	if(a>b){
		if(a>c){
			cout << "A is Max";
		}
		else{
			cout << "C is Max";
		}
	}
	else{
		if(b>c){
			cout << "B is Max";
		}
		else{
			cout << "C is Max";
		}
	}
	
	return 0;
}