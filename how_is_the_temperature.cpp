#include <iostream>
using namespace std;
int main(){
    double a;
    cout << "Please enter in how is the temperature today: ";
    cin >> a;
    if (a<=20 && a >= 1) cout << "It's too cold.";
    if (a > 20 && a < 30) cout << "It's nice.";
    if (a >= 30) cout << "It's too hot.";
    else cout << "It's not a number!";
    return 0;
}