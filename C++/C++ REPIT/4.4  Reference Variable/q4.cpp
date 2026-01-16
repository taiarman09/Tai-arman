#include <iostream>
#include <string>
using namespace std;

class student
{

public:
    string name;
    int number, number1;
    float gpa;
    void newstudent()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> number;
        cout << "Enter GPA: ";
        cin >> gpa;
        cout << "Copy constructor (Deep Copy) called!" << endl;
        cout << "Student added successfully!" << endl;
    }

    void display()
    {
        cout << endl
             << "===== All Student Records =====" << endl;

        cout << "Name: " << name << ", Roll No: " << number << ", GPA: " << gpa << endl;
    }

    void roll()
    {

        number1 = number;
        cout << "Enter Roll Number to Search: ";
        cin >> number1;

        if (number1 == number)
        {
            cout << endl
                 << "Student Found:" << endl;
            cout << " Name: " << name << ", Roll No: " << number << ", GPA: " << gpa << endl;
        }
        else
        {
            cout << "not found! please try again." << endl;
        }
    }

    void exit()
    {
        cout << "Exiting program..." << endl;
    }
};

int main()
{
    int choice;
    student s1;
    do
    {

        cout << endl
             << "===== STUDENT RECORD MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add New Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by Roll Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s1.newstudent();
            break;
        case 2:
            s1.display();
            break;

        case 3:
            s1.roll();
            break;

        case 4:
            s1.exit();
            break;

        default:
            cout << "Invalid Number! Please Try Again.";
            break;
        }
    } while (choice != 4);

    return 0;
}