#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineID;
    string phone;
};

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1) {
    // TODO
    cout << "\n=== Output Student 1 ===\n";
    cout << "ID \tNicname \t LineID\t Phone\t" << endl;
    cout << s1.id << "\t" << s1.nickname << "\t" << s1.lineID << "\t" << s1.phone << "\t";
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
    cout << "=== Input Student 1 ===\n";
    cout << "Enter ot id ";
    cin >> s1.id;

    cout << "Enter ot Nickname ";
    cin >> s1.nickname;

    cout << "Enter ot lineID ";
    cin >> s1.lineID;

    cout << "Enter ot Phone ";
    cin >> s1.phone;

    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
    printStudent(s1);

    return 0;
}

