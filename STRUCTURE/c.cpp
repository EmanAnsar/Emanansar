#include<iostream>
using namespace std;
struct Currency{
    string currencyType;
    float amount;
    float convertToUSD(float conversionRate){
        return amount*conversionRate;
    }
};
int main(){
    Currency currency;
    cout<<"Enter the currency type ";
    cin>>currency.currencyType;
    cout<<"Enter the amount in "<<currency.currencyType<<": ";
    cin>>currency.amount;
    float conversionRate;
    cout<<"Enter the conversion rate to USD: ";
    cin>>conversionRate;
    float usdAmount=currency.convertToUSD(conversionRate);
    cout<<"Amount in USD: "<<usdAmount<<endl;
    return 0;
}

