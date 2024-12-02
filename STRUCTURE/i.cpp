#include <iostream>
#include <string>
#include <cctype>
using namespace std;
    struct Contact {
    string name;
    string address;
    string mobileNumber;
};
bool startsWith(const string& name,const string& prefix) {
    for(size_t i=0;i<prefix.size();i++) {
        if(tolower(name[i])!=tolower(prefix[i])){
            return false;}}
    return true;}
int main() {
    Contact contacts[10] = {
        {"Saima", "1 Street", "1234567890"},
        {"Sara", "4 Street", "0300778h"},
        {"Saad", "78 Street", "109955"},
        {"Farmad", "321 Street", "9988655"},
        {"Ahmed", "654 Street", "2233445566"},
        {"Ali", "111 Street", "5566778899"},
        {"Sana", "2 Street", "667900"},
        {"Fara", "5 Street", "44588"},
        {"Ahaan", "888 Street", "3356677"},
        {"Sidra", "777 Street", "223577"}
    };
    string prefix;
    cout<<"Enter the starting letters of the name:";
    cin>>prefix;
	cout<<"Contacts whose name starts with"<<prefix<<"':\n";
    for(int i=0;i<10;i++) {
        if(startsWith(contacts[i].name,prefix)) {
            cout<<"Name:"<<contacts[i].name<<",Address:"<<contacts[i].address<<", Mobile:"<<contacts[i].mobileNumber<<endl;}}
     return 0;
}

