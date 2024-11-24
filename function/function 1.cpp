#include<iostream>
using namespace std;
int swap(int &c,int &d){
	int temp=c;
	 c=d;
	 d=temp;

}
int main(){
	int a=10;
	int b=50;
	cout<<"Before swapping\n"<<a<<"\n"<<b<<endl;
	swap(a,b);
	cout<<"After swapping\n"<<a<<"\n"<<b;
}
