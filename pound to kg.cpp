#include <iostream>
using namespace std;
int main(){
	double rate,pound,kg;
	rate = 0.4535924;// use rate to mean the rate between pound and kg
	cout << "Please enter in how much pound do you want to turn into kg:";
	cin >> pound;
	kg = rate * pound;
	cout << kg << "kgs";
	return 0;
}