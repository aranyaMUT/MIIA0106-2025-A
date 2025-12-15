#include <iostream>
using namespace std;

int main()
{
	int a, b;

	srand(time(0));
	a = rand() % 100 + 1;

	cout << "มาทายเลข 1-100 กันเถอะ" << endl;
	do
	{
		cout << "กรุณาทายเลขที่คุณคิดว่าใช่" << endl;
		cin >> b;
		
		if (b > a)
		{
			cout << "มากเกินไปน้าาา" << endl;
		}else if  (b < a)
		{
			cout << "น้อยเกินไปน้าาา" << endl;
		}else
		{
			cout << "นี่แหละเลขที่ถูกต้อง" << endl;
		}

	} while (b!=a);
}