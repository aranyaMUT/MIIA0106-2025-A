#include <iostream>
using namespace std;
int main() {
	string studentID;
	string name;
	int score;

	cout << "Enter studentID : ";
	cin >> studentID;
	cout << "Enter student name : ";
	cin >> name;
	cout << "Enter score : ";
	cin >> score;

	cout << "--------Student Report---------" << endl;
	cout << "Student ID   : " << studentID << endl;
	cout << "Student Name : " << name << endl;
	cout << "Scor         : " << score << endl;

	if (score >= 90) {
		cout << "Grade : A" << endl;
	}
	else if (score >= 80) {
		cout << "Grade : B" << endl;
	}
	else if (score >= 70) {
		cout << "Grade : C" << endl;
	}
	else {
		cout << "Grade : F" << endl;
	}
	cout << "--------------------------------" << endl;
	return 0;
}
