#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentID;
    string nickname;
};

int main() {
    Student s1;
    Student* p = nullptr;

    // TODO 2) ใช้ pointer p ชี้ไปที่ s1
        // TODO: p = &s1;
    p = &s1;
        // TODO 3) กำหนดค่าโดยใช้ p->
            // TODO: p->studentID = ...
            // TODO: p->nickname = ...
        p-> studentID = "6811130004";
        p->nickname = "Fatin";

    // TODO 4) แสดงผลโดยใช้ p->
    cout << "ID: " << p->studentID << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}

