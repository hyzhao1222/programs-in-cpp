#include <iostream>
using namespace std;
int main(){
	int money,cost;
	string talk;
	cout << "Please enter in how much is one bottle of water: ";
	cin >> cost;
	cout << "Please enter in how much money do you have: ";
	cin >> money;
	money /= cost;
	if (money == 1) talk = " bottle of water.";
	else talk = " bottles of water.";
	cout << "You can buy " << money << talk;
}