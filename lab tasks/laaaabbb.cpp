#include <iostream>
using namespace std;
int main() {
    int num,sum=0,digit,n;
    cout<<"Enter a number:";
    cin>>num;
    n=num;
    int count = 0;
    for(int i = num;i>0;i/=10) {
        count++;
    }for(int i=0;i<count;i++) {
        digit=num % 10;
        sum+=digit;
        num/=10;
    }cout<<"Sum of digits of "<<n<<"is:"<<sum<<endl;
      return 0;
}
