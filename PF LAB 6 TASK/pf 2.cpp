#include<iostream>
using namespace std;
int main()
{
	const string Password="eman";
	const int maxattempt=3;
	int attempt=0;
	string password;
	do{
			cout<<"  Enter password   ";
		cin>>password;
		attempt++;     
		if(password=="eman") 
		cout<<"Correct";
		else
        cout<<"Incorrect";
}
while(password!=Password&&attempt<maxattempt);
if(attempt==maxattempt)
cout<<"Your tries are over";
	}
	

