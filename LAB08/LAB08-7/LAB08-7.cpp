#include <iostream>
#include <string>
using namespace std;

struct Phone
{
    string mobile;
    string home;
};

struct Parent
{
    string name;
    string relationship;
    Phone contact;
};

struct Student
{
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;
};

void inputStudent(Student& student)
{
    cout << "Enter Student Information\n";

    cout << "ID: ";
    cin >> student.id;

    cout << "Nickname: ";
    cin >> student.nickname;

    cout << "LineId: ";
    cin >> student.lineId;

    cout << "Student Mobile Number: ";
    cin >> student.myContact.mobile;

    cout << "Student Home Number: ";
    cin >> student.myContact.home;

    cout << "Parent Name: ";
    cin >> student.myParent.name;

    cout << "Parent Relationship: ";
    cin >> student.myParent.relationship;

    cout << "Parent Mobile Number: ";
    cin >> student.myParent.contact.mobile;

    cout << "Parent Home Number: ";
    cin >> student.myParent.contact.home;
}

void printStudent(const Student& student)
{
    cout << "\n===== Student Data =====\n";
    cout << "ID : " << student.id << endl;
    cout << "Nickname : " << student.nickname << endl;
    cout << "LineId : " << student.lineId << endl;

    cout << "Student Phone : Mobile "
        << student.myContact.mobile
        << ", Home "
        << student.myContact.home << endl;

    cout << "Parent : "
        << student.myParent.name << ", "
        << student.myParent.relationship << endl;

    cout << "Parent Phone : Mobile "
        << student.myParent.contact.mobile
        << ", Home "
        << student.myParent.contact.home << endl;
}

int main()
{
    Student student;
    inputStudent(student);
    printStudent(student);

    return 0;
}


