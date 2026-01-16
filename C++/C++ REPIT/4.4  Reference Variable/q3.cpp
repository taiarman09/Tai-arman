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
         << "Enter details for Student 1:" << endl;

    s1.studentsdetails();

    s2 = s1;

    cout << endl
         << "Copy constructor (Deep Copy) called!" << endl;
         cout << endl
         << "Original Student (s1):" << endl;
    s1.studentsdetailss();

    cout << endl
         << "Copied Student (s2):" << endl;
    s2.studentsdetailss();

    cout<<endl<<"--- Displaying Using Reference Variable ---"<<endl;
    s2.studentsdetailss();

    return 0;
}