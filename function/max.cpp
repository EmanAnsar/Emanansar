#include<iostream>
using namespace std;
int largest(int x,int y,int z){
	if(x>y&&x>z){
		return x;
	}
	if(y>x&&y>z){
		return y;
	}
	if(z>x&&z>y){
		return z;
	}
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int max=largest(a,b,c);
	cout<<max;
}
