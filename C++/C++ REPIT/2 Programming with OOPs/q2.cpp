#include <iostream>
using namespace std;

class Car
{
public:
    int id, year;
    string name, color, model;

    void Record(int id, string name, string color, string model, int year)
    {
        cout << endl
             << "- car_id          :" << id << endl;
        cout << "- car_company_name:" << name << endl;
        cout << "- car_color       :" << color << endl;
        cout << "- car_model       :" << model << endl;
        cout << "- car_release_year:" << year << endl;
    }
};

int main()
{

    Car c1, c2, c3, c4, c5;

    c1.Record(1, "Tesla", "Red", "Sedan", 2023);
    c2.Record(2, "BMW", "Black", "Coupe", 2024);
    c3.Record(3, "Mercedes-Benz", "White", "SUV", 2023);
    c4.Record(4, "Audi", "Blue", "Hatchback", 2024);
    c5.Record(5, "Lamborghini", "Yellow", "Sports", 2022);

    return 0;
}