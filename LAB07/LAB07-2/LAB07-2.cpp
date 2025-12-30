#include <iostream>
using namespace std;
int main() {
	int score = 50;
	int* ptr = &score;

	
	cout << "address of score" << &score << endl;
	cout << "Value of ptr" << ptr << endl;
	cout << "address of pointer" << &ptr << endl;

	return 0;
}