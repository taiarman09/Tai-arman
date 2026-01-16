#include <iostream>
#include <string>
using namespace std;

class Foodcafe
{

private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    Foodcafe(int id, string name, string type, string rating, string location, int year, int staff)
    {
        cafe_id = id;
        cafe_name = name;
        cafe_type = type;
        cafe_rating = rating;
        cafe_location = location;
        cafe_establish_year = year;
        cafe_staff_quantity = staff;
    }

    void displaydata()
    {
        cout << endl
             << "========= Cafe Details =========" << endl;
        cout << "- cafe_id             : " << cafe_id << endl;
        cout << "- cafe_name           : " << cafe_name << endl;
        cout << "- cafe_type           : " << cafe_type << endl;
        cout << "- cafe_rating         : " << cafe_rating << endl;
        cout << "- cafe_location       : " << cafe_location << endl;
        cout << "- cafe_establish_year : " << cafe_establish_year << endl;
        cout << "- cafe_staff_quantity : " << cafe_staff_quantity << endl;
    }
};

int main()
{

    int n;

    cout << "Enter number of Fast Food Cafe: ";
    cin >> n;

    Foodcafe *cafe[n];

    for (int i = 0; i < n; i++)
    {
        int id, year, staff;
        string name, type, rating, location;
        cout << "\nEnter details for Fast Food Cafe " << i + 1 << ":\n";
        cout << "cafe_id: ";
        cin >> id;
        cout << "cafe_name: ";
        cin >> name;
        cout << "cafe_type: ";
        cin >> type;
        cout << "cafe_rating: ";
        cin >> rating;
        cout << "cafe_location: ";
        cin >> location;
        cout << "cafe_establish_year: ";
        cin >> year;
        cout << "cafe_staff_quantity: ";
        cin >> staff;

        cafe[i] = new Foodcafe(id, name, type, rating, location, year, staff);
    }

    for (int i = 0; i < n; i++)
    {
        cafe[i]->displaydata();
    }

    for (int i = 0; i < n; i++)
    {
        delete cafe[i];
    }

    return 0;
}