#include <iostream>

using namespace std;

void convert_to_binary(int n);

int main() {
    int inputted_n;
    cout << "Enter number: ";
    cin >> inputted_n;
    cout << inputted_n << " -----> ";
    convert_to_binary(inputted_n);
    cout << endl;
    return 0;
}

void convert_to_binary(int n) {
    if (n < 2) {cout << n; return;}
    int remander = n % 2;
    convert_to_binary(n / 2);
    cout << remander;
}
