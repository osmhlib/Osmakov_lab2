#include <iostream>

using namespace std;

bool isNumberFriendly(int a, int b) {
	int sum1 = 0, sum2 = 0;
	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			sum1 += i;
		}
	}
	for (int i = 1; i < b; i++) {
		if (b % i == 0) {
			sum2 += i;
		}
	}
	if (sum1 == b && sum2 == a) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int number1, number2;
	cout << "input first number:\n";
	cin >> number1;
	cout << "input second number:\n";
	cin >> number2;
	if (isNumberFriendly(number1, number2)) {
		cout << "numbers are friendly\n";
	}
	else {
		cout << "numbers aren't friendly\n";
	}
}
