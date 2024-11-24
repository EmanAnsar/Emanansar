#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cout<<"Enter the size of the array";
	cin>>n;
	int arr[n][n];
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Transposed matrix:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
}
