#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;

}
	
int main() {
	int a,b,c;

	cout << "Enter a: " ;
	cin >> a;
	cout << "Enter b: " ;
	cin >> b;
	cout << "Enter c: " ;
	cin >> c;

	int max = 0;
	max = maxOfThree(a, b, c);
	cout << "The maximum value is  " << max << endl;

	return 0;
}