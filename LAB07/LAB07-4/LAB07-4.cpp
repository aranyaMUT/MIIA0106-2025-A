#include <iostream>
using namespace std;
int main() {
	int arr[] = { 10, 20, 30, 40 };
	int* p = arr;
	// TODO
	cout << *(p + 0) << "\t";
	cout << *(p + 1) << "\t";
	cout << *(p + 2) << "\t";
	cout << *(p + 3) << "\t";
	
	//for
	//for (int i = 0; i < 4; i++)
	//{
		//cout << *(p + i) << "\t";
	//}

	return 0;
}