#include <iostream>

using namespace std;

int fibonacci(int nth_fib_num, int second, int first, bool output);

int main() {
	int n, nth_num;
	string y_or_n;
	bool output = false;
	cout << "Enter (positive) value of n: "; cin >> n;
	cout << "Would you like to see the process (yes/no)? "; cin >> y_or_n;
	if (y_or_n == "yes") {output = true; cout << "0 ";}
	
	nth_num = fibonacci(n, 0, 1, output);
	cout << endl << "FIBONACCI NUMBER #" << n << " -----> " << nth_num << endl;
	return 0;
}

int fibonacci(int nth_fib_num, int second, int first, bool output) {
	if (output) {cout << first << " ";}
	if (nth_fib_num == 0) {return 0;}
	else if (nth_fib_num == 1) {return 1;}
	else if (nth_fib_num == 2) {return first;}
	return fibonacci(--nth_fib_num, first, first+second, output);
}
