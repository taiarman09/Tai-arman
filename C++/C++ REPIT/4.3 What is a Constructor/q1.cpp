#include <iostream>
#include <string>
using namespace std;

class Diamondcompanies
{

private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    Diamondcompanies(int id, string name, int staff, double rev, int import, int exportyear, string ceo)
    {
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = rev;
        comp_import_raw_diamonds = import;
        comp_export_diamonds = exportyear;
        comp_ceo = ceo;
    }

    void displaydata()
    {
        cout << "\n--- Company Details ---\n";
        cout << "Company ID                  : " << comp_id << endl;
        cout << "Company Name                : " << comp_name << endl;
        cout << "Staff Quantity              : " << comp_staff_quantity << endl;
        cout << "Annual Revenue (in crores)  : " << comp_revenue << endl;
        cout << "Imported Raw Diamonds/year  : " << comp_import_raw_diamonds << endl;
        cout << "Exported Diamonds/year      : " << comp_export_diamonds << endl;
        cout << "CEO Name                    : " << comp_ceo << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of Diamond Companies: ";
    cin >> n;

    Diamondcompanies *comapny[n];

    for (int i = 0; i < n; i++)
    {
        int id, staff, import, exportyear;
        double rev;
        string name, ceo;

        cout << "\nEnter details for company " << i + 1 << ":\n";
        cout << "Company ID: ";
        cin >> id;
        cout << "Company Name: ";
        cin >> name;
        cout << "Staff Quantity: ";
        cin >> staff;
        cout << "Annual Revenue (in crores): ";
        cin >> rev;
        cout << "Raw Diamonds Imported/year: ";
        cin >> import;
        cout << "Diamonds Exported/year: ";
        cin >> exportyear;
        cout << "CEO Name: ";
        cin >> ceo;

        comapny[i] = new Diamondcompanies(id, name, staff, rev, import, exportyear, ceo);
    }

    cout << "\n========== COMPANY INFORMATION ==========\n";
    for (int i = 0; i < n; i++)
    {
        comapny[i]->displaydata();
    }

    for (int i=0; i<n; i++)
    {
       delete comapny[i];
    }
    

    return 0;
}