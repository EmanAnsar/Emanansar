#include <iostream> 
using namespace std;
int square(int num) {
return num*num;
}
int main() {
int(*squareptr)(int)=square;
int num;
cout<<"Enter a number: ";
cin>>num;
int result = squareptr(num);
cout<<"Square of"<<num<<"is: "<<result<<endl;
return 0;
}

