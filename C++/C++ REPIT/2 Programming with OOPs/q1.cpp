#include <iostream>
using namespace std;

class Employee{

    public:
    int id,age,salary,experience;
    string name,role,city,cn;

    void Record(int id,string name, int age,string role,int salary, string city,int exeperience, string cn){
        cout<<endl<<"- emp_id          : "<<id<<endl;
        cout<<"- emp_name        : "<<name<<endl;
        cout<<"- emp_age         : "<<age<<endl;
        cout<<"- emp_role        : "<<role<<endl;
        cout<<"- emp_salary      : "<<salary<<endl;
        cout<<"- emp_city        : "<<city<<endl;
        cout<<"- emp_experience  : "<<experience<<endl;
        cout<<"- emp_company_name: "<<cn<<endl;
    }


};


int main(){

    Employee e1,e2,e3,e4,e5;

    e1.Record(26,"ayan",18,"worker",20000,"ahmedabad",2,"red");
    e2.Record(27,"arman",18,"worker",20000,"ahmedabad",2,"red");
    e3.Record(28,"gulam",18,"worker",20000,"ahmedabad",2,"red");
    e4.Record(29,"pagi",18,"worker",20000,"ahmedabad",2,"red");
    e5.Record(30,"hulam",18,"worker",20000,"ahmedabad",2,"red");


    return 0;
}