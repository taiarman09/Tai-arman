#include <iostream>
using namespace std;

class Customer
{
public:
    int id, age, number, year;
    string name, city, brand;

    void Record(int id, string name, int age, string city, int number, int year, string brand)
    {

        cout << endl
             << "- cust_id                                             : " << id << endl;
        cout << "- cust_name                                           : " << name << endl;
        cout << "- cust_age                                            : " << age << endl;
        cout << "- cust_city                                           : " << city << endl;
        cout << "- cust_mobile_number                                  : " << number << endl;
        cout << "- cust_simcard_validity (in years)                    : " << year << endl;
        cout << "- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.): " << brand << endl;
    }
};

int main()
{

    
    Customer c1, c2, c3, c4, c5;

    c1.Record(1, "arman", 18, "viramgam", 840191852, 2018, "jio");
    c2.Record(2, "ayan", 18, "viramgam", 73830202, 2018, "airtel");
    c3.Record(3, "zed", 18, "viramgam", 972713870, 2018, "vi");
    c4.Record(4, "gulam", 18, "viramgam", 847383707, 2018, "jio");
    c5.Record(5, "mahiyodin", 18, "viramgam", 102972205, 2018, "airtle");

    return 0;
}