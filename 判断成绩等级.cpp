#include <iostream>
using namespace std;
int main(){
	float score;
	cout << "Please enter in your grade(Zero is not accepted): ";
	cin >> score;
	if (score >= 100) cout << "That is not true!";
	else if (score == 100) cout << "You have an A+";
	else if (score >= 90) cout << "You have an A";
	else if (score >= 80) cout << "You have a B";
	else if (score >= 70) cout << "You have a C";
	else if (score >= 60) cout << "You have a D";
	else if (score >= 1) cout << "You have a F";
	else cout << "Please enter in a number!";
	return 0;
}