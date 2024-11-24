#include<iostream>
using namespace std;
int main(){
	int entryfee=1000;
	int snackcost=500;
	int tstudents;
	int totalcost=0;
	cout<<"How many students will attend the game night? (Maximum 15):";
	cin>>tstudents;
	if(tstudents>15) {
		cout<<"Not more than 15 students are allowded";
		return 1;
	}
	string user[15];
	cin.ignore();
	for(int i=0;i<tstudents;i++){
		cout<<"Enter the name for student "<<" "<<i+1<<":"<<endl;
		getline(cin,user[i]);
	}
	cout<<"Users names for the event:";
	for(int i=0;i<tstudents;i++){
		cout<<"User "<<i+1<<" "<<user[i]<<endl;
	}
	for(int i=0;i<tstudents;i++){
		int usercost=entryfee+snackcost;
		totalcost+=usercost;
		cout<<user[i]<<" Total fee "<<usercost<<endl;
	}
	cout<<"Total cost "<<totalcost;
}
