#include <iostream> 
using namespace std;

int main() 
{
int num=10;
int*ptr;
ptr=&num;

cout<<"Value of num: "<<num<<endl;
cout<<"Address stored in ptr: "<<ptr<<endl;
cout<<"Value at the address stored in ptr: "<<*ptr<<endl;
return 0;
}

