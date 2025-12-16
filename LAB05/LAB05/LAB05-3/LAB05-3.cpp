#include <iostream>
using namespace std;
// Call by Value
void value(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
void reference(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10, b = 20;
	cout << "Before swap: a = " << a << ", b = " << b << endl;
	
	value (a, b); 
	cout << "After swap (Call by value): a = " << a << ", b = " << b << endl;

	reference(a, b); 
	cout << "After swap (call by refern): a = " << a << ", b = " << b << endl;
	
	return 0;
}