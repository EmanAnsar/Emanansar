#include<iostream>
using namespace std;
int main(){
	int i;
	int popPrice=100;
	int ticPrice=500;
	int tstudents;
	int totalcost=0;
	cout<<"how many students are attending the event(max 10)";
	cin>>tstudents;
	if(tstudents>10){
		cout<<"Not more then 10 students are allowded";
		return 1;
	}
	string users[10];
	cin.ignore();
	for(int i=0;i<tstudents;i++){
		cout<<"Enter the name of student "<<i+1<<":";
	    getline(cin,users[i]);
	}
	cout<<"Users name for the event:"<<endl;
	for(int i=0;i<tstudents;i++){
		cout<<"User "<<i+1<<":"<<users[i]<<endl;}
		for(int i=0;i<tstudents;i++){
			int stcost=popPrice+ticPrice;
		    totalcost+=stcost;
			cout<<users[i]<<" Total cost "<<stcost<<endl;              
		}
		cout<<"Total Cost of all students "<<totalcost;
}
