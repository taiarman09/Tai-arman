#include <iostream>
using namespace std;

class Student
{
public:
    int id, age;
    string name, course, city, email, collage;

    void Record(int id, string name, int age, string course, string city, string email, string collage)
    {
        cout << endl
             << "- stu_id      : " << id << endl;
        cout << "- stu_name    : " << name << endl;
        cout << "- stu_age     : " << age << endl;
        cout << "- stu_course  : " << course << endl;
        cout << "- stu_city    : " << city << endl;
        cout << "- stu_email   : " << email << endl;
        cout << "- stu_college : " << collage << endl;
    }
};

int main()
{
    Student s1, s2, s3, s4, s5;

    s1.Record(1, "Arman", 18, "Full Stack Dev", "Ahmedabad", "taiarman722@gmail.com", "Red And White Skill Education");
    s2.Record(2, "Ayan", 18, "Full Stack Dev", "Ahmedabad", "taiayan832@gmail.com", "Red And White Skill Education");
    s3.Record(3, "Zed", 18, "Full Stack Dev", "Ahmedabad", "taized786@gmail.com", "Red And White Skill Education");
    s4.Record(4, "Gulam", 18, "Full Stack Dev", "Ahmedabad", "taigulam565@gmail.com", "Red And White Skill Education");
    s5.Record(5, "Hulam", 18, "Full Stack Dev", "Ahmedabad", "huwdisl55@gmail.com", "Red And White Skill Education");

    return 0;
}