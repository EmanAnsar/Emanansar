#include<iostream>
using namespace std;
int main()
{
	int n;
	long sum=0;
	int i=1;
		cout<<"Enter the value of n:";
		cin>>n;
	do{
		sum=sum+i*i;
		i++;
	}
	while(i<=n);
	cout<<sum;
}
