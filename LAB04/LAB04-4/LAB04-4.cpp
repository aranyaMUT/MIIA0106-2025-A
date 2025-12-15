#include <iostream>
using namespace std;

int main()
{
	int a ;

	cout << "กรอกตัวเลขที่ต้องการคำนวณ" << endl;
	cin >> a;
	cout << "ตารางสูตรคูณแม่ "<< a << endl;
	
	for (int i = 1; i <= 12; i++)
	{
		cout << a << "x" << i << "=" << a * i << endl;
	}
	return 0;

}