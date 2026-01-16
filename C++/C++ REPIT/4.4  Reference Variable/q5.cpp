#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ===== Student Class =====
class Student {
public:
    string name;
    int rollNumber;
    float gpa;

    Student(string n, int r, float g) {
        name = n;
        rollNumber = r;
        gpa = g;
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNumber << ", GPA: " << gpa << endl;
    }
};

// ===== Student Record Manager Class =====
class StudentRecordManager {
private:
    vector<Student> students;

public:
    void addStudent(string name, int roll, float gpa) {
        Student s(name, roll, gpa);
        students.push_back(s);
        cout << "Student added successfully!" << endl;
    }

    void displayAll() {
        if (students.empty()) {
            cout << "No students in record!" << endl;
            return;
        }
        cout << "===== All Student Records =====" << endl;
        for (auto &s : students) {
            s.display();
        }
    }

    void searchByRoll(int roll) {
        for (auto &s : students) {
            if (s.rollNumber == roll) {
                cout << "Student Found:" << endl;
                s.display();
                return;
            }
        }
        cout << "Student with Roll No " << roll << " not found!" << endl;
    }
};

// ===== Main Function to Test =====
int main() {
    StudentRecordManager manager;

    // Adding sample students
    manager.addStudent("Alice", 101, 3.8);
    manager.addStudent("Bob", 102, 3.5);
    manager.addStudent("Charlie", 103, 3.9);

    cout << endl;

    // Display all students
    manager.displayAll();

    cout << endl;

    // Search for a student
    manager.searchByRoll(102); // Should find Bob
    manager.searchByRoll(105); // Should show not found

    return 0;
}
