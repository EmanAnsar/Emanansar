#include<iostream>
using namespace std;
int printTempOpinion(int temperature){
	if(temperature<10){
		cout<<"Cold";
	}
	else if(temperature>20&&temperature<=30){
		cout<<"OK";
	}
	else if(temperature>30){
		cout<<"Hot";
	}
	
}

int main(){
	int temp;
	cout<<"Enter temperature";
	cin>>temp;
	printTempOpinion(temp);
	
}
