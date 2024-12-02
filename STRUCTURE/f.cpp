#include <iostream>
using namespace std;
float Greatest(float values[],int size){
    float greatest=values[0];
    for(int i=1;i<size;i++) {
        if(values[i]>greatest) {
            greatest=values[i];}}
    return greatest;
}
int main() {
    float values[20];
    cout<<"Enter 20 values:";
    for(int i=0;i<20;i++) {
        cin>>values[i];}
    float greatest = Greatest(values, 20);
    cout<<"The greatest value is:"<<greatest<<endl;
	return 0;
}

