#include <iostream>
#include <string>
using namespace std;
int main(){
	string name1, name2;
	cout << "Please enter in your first student name: ";
	cin >> name1;
	cout << "Please enter in your second student name: ";
	cin >> name2;
	cout << "Their name: ";
	if(name1 < name2)
		cout << name1 << "," << name2;
	else
		cout << name2 << "," << name1;
	return 0;
}