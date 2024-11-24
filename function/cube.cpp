#include<iostream>
using namespace std;
int cube(int n){
	int c=n*n*n;
	return c;
}
int main(){
	int n;
	cout<<"Enter a number to find cube(0 to exit)"<<endl;
	while(true){
		cout<<"Number:";
		cin>>n;
	if(n==0){
		break;
	}
	int num=cube(n);
	cout<<"The cube of the number is "<<num<<endl;
		
	}
	
}
