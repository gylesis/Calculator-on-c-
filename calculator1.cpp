#include <iostream>
using namespace std;
int main()
{
	int a, b, res;
	string num;
	cout << "Choose operation for numbers: multiplication/subtraction/addition/division" << endl;
	cin >> num;
	cout << "Write down these numbers" << endl;
	cin >> a;
	cin >> b;
	if (num == "mult") {
		res = a * b;
		cout << "Result is" << endl;
		cout << res;
	}
	else if (num == "subtraction") {
		res = a - b;
		cout << "Result is" << endl;
		cout << res;
	}
	else if (num == "addition") {
		res = a + b;
		cout << "Result is" << endl;
		cout << res;
	}
	else if (num == "division") {
		res = a / b;
		cout << "Result is" << endl;
		cout << res;
	}
}
