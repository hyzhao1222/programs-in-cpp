#include <iostream>
using namespace std;
int main(){
	int books,months;
	cout << "How many books do you have? ";
	cin >> books;
	cout << "How many month do you have? ";
	cin >> months;
	double books_per_month;
	books_per_month = static_cast<double>(books) / months;
	// static_cast -> used to change type of valuables
	//<double> -> the type of valuables you want to change to
	//(books) -> the valuable you want to change
	//static_cast<datatype>(value)
	cout << "You need to read " << books_per_month << " books per month.";
	return 0;
}