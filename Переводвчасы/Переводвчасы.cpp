#include<iostream>
using namespace std;
int main() {
	int days, hours, minutes, seconds;
	cout << "введите дни";
	cin >> days;
	cout << "введите часы";
	cin >> hours;
	cout << "введите минуты";
	cin >> minutes;
	cout << " введите секунды";
	cin >> seconds;
	int s = (days * 86400) + (hours * 60 * 60) + (minutes * 60) + seconds;
	cout << s;
}