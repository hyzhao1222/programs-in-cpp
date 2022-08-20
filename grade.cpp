#include <iostream>
using namespace std;
int main(){
    float score,all;
    cout << "Please enter in how much score will you get when you got 100% right: ";
    cin >> all;
    cout << "Please enter in your grade: ";
    cin >> score;
    if (score >= all*90/100) cout << "Nice!";
    else if (score >= all*60/100) cout << "You need to learn harder!";
    else cout << "You have bad grade!";
}