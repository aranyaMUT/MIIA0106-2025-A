#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string lineID;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        cout << "Enter ot id ";
        cin >> students[i].id;

        cout << "Enter ot Nickname ";
        cin >> students[i].nickname;

        cout << "Enter ot lineID ";
        cin >> students[i].lineID;

        cout << "Enter ot Phone ";
        cin >> students[i].phone;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {

        cout << "ID \t\t Nicname \t LineID\t Phone\t" << endl;
        cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineID << "\t" << students[i].phone << "\t";
        cout << "----------------------\n";
    }

    return 0;
}
