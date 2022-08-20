#include <iostream>
using namespace std;
int main(){
	double a,b,c;
	cout << "Please enter in how long is each side of a triangle(for example: 5 8 10): ";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) cout << "It can be a triangle.";
	else cout << "It can not be a triangle.";
	return 0;
}