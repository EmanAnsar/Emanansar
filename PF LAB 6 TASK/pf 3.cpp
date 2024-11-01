#include<iostream>
using namespace std;
int main()
{
	int num=50;
	int guess;
	int attempt=0;
	do{
		cout<<"Enter a number";
		cin>>guess;
		attempt++;
		if(guess>num)
		cout<<"You have exceded the number ";
		else if(guess<num)
		cout<<"You have gussed a low number";
		else
        cout<<"Congragulations.You guessed it";	}
        while(guess!=num);
}
