#include<iostream>
using namespace std;
struct Product{
	int code;
	string description;
	char packaging;
	float price;
	float discount;
	};
int main(){
	Product product[10]={
	    {101,"Package A",'L',500.0,3.0},
	    {102,"Product B",'M',300.0,5.0},
        {103,"Product C",'L',1200.0,20.0},
        {104,"Product D",'S',150.0,5.0},
        {105,"Product E",'L',750.0,15.0},
        {106,"Product F",'L',950.0,10.0},
        {107,"Product G",'M',450.0,12.0},
        {108,"Product H",'L',600.0,5.0},
        {109,"Product I",'L',250.0,2.0},
        {110,"Product J",'S',100.0,0.0}
};
float netPrice;
for(int i=0;i<10;i++){
	if(product[i].packaging=='L')
	netPrice=product[i].price*(1-(product[i].discount/100));
	if(netPrice>=200&&netPrice<=1000){
		cout<<"Code:"<<product[i].code<<",Description:"<<product[i].description<<",Price:"<<product[i].price<<",Discount:"
		<<product[i].discount<<"%,Net Price:"<<netPrice<<endl; } }
		return 0;
    }

		
	


