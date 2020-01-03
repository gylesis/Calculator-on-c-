#include <iostream>
using namespace std;
int main()
{
	int a, b, res;
	string num;
	cout << "Choose operation for numbers: * or - or + or /" << endl;
	cin >> num;
	cout << "Write down these numbers" << endl;
	cin >> a;
	cin >> b;
	if (num == "*") {
		res = a * b;
		cout << "Result is" << endl;
		cout << res;
	}
	else if (num == "-") {
		res = a - b;
		cout << "Result is" << endl;
		cout << res;
	}
	else if (num == "+") {
		res = a + b;
		cout << "Result is" << endl;
		cout << res;
	}
	else if (num == "/") {
		res = a / b;
		cout << "Result is" << endl;
		cout << res;
	}
}
