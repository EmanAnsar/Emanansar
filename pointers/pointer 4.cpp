#include <iostream> 
using namespace std;
int main() 
{
int var=8;
int*pointvar=&var;

cout<<"Original value of var: "<<var<<endl;
cout<<"Address of var: " <<&var<<endl;
cout<<"Value stored in pointer pointvar: "<<pointvar<< endl;
cout<<"Content of the address pointed to by pointvar: "<<*pointvar<<endl;

cout<<"Enter a new value for var: ";
cin>>*pointvar;
cout<<"Updated value of var: "<<var<<endl;
return 0;
}

