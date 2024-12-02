#include<iostream>
using namespace std;
int main(){
    float budget[3][12];
    cout<<"Enter the budget for 3 items (Rent, Electric, Gas) for each month:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            cout<<"Enter budget for item "<<(i+1)<<" month "<<(j+1)<<": ";
            cin>>budget[i][j];}
    }
    cout<<"\nYearly Budget(3 items, 12 months):\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<12;j++){
            cout<<"Item "<<(i+1)<<"Month"<<(j+1)<<":"<<budget[i][j]<<" "; }
            cout<<endl;}
			return 0;
}


