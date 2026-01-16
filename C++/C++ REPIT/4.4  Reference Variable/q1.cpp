#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string studentsname;
    int rollnumber;
    float GPA;

public:
    student()
    {
        studentsname = "";
        rollnumber = 0;
        GPA = 0.0;
    }

    student(string n, int r, float g)
    {
        studentsname = n;
        rollnumber = r;
        GPA = g;
    }

    void studentsdetails()
    {
        cout << "Name: ";
        cin >> studentsname;
        cout << "Roll Number: ";
        cin >> rollnumber;
        cout << "GPA: ";
        cin >> GPA;
    }
    void studentsdetailss()
    {
        cout << "Name: " << studentsname << endl;
        cout << "Roll Number: " << rollnumber << endl;
        cout << "GPA: " << GPA << endl;
    }
};

int main()
{
    student s1, s2;

    cout << endl
         << "Enter student details:" << endl;

    s1.studentsdetails();

    s2 = s1;

    cout << endl
         << "Original Student Details:" << endl;
    s2.studentsdetailss();

    cout << endl
         << "Copied Student Details:" << endl;
    s2.studentsdetailss();

    return 0;
}