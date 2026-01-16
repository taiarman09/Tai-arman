#include <iostream>
using namespace std;

class Hotels{

    private:
    int id;
    string name,type,rating,location,year,sq,rq;

    public:

    void setdata(){
        cout<<"- hotel_id             : ";
        cin>>id;
        cout<<"- hotel_name           : ";
        cin>>name;
        cout<<"- hotel_type           : ";
        cin>>type;
        cout<<"- hotel_rating         : ";
        cin>>rating;
        cout<<"- hotel_location       : ";
        cin>>location;
        cout<<"- hotel_establish_year : ";
        cin>>year;
        cout<<"- hotel_staff_quantity : ";
        cin>>sq;
        cout<<"- hotel_room_quantity  : ";
        cin>>rq;
    }

    void displaydata(){

        cout<<endl<<"- hotel_id            : "<<id<<endl;
        cout<<"- hotel_name          : "<<name<<endl;
        cout<<"- hotel_type          : "<<type<<endl;
        cout<<"- hotel_rating        : "<<rating<<endl;
        cout<<"- hotel_location      : "<<location<<endl;
        cout<<"- hotel_establish_year: "<<year<<endl;
        cout<<"- hotel_staff_quantity: "<<sq<<endl;
        cout<<"- hotel_room_quantity : "<<rq<<endl;
    }


};


int main(){

    int n,i;

    cout<<"Enter number of Hotels: ";
    cin>>n;
    
    Hotels arr[n];

    for (int i=0; i<n; i++)
    {
        cout <<endl<< "--- Enter details for Hotel " << i + 1 << " ---"<<endl;
        arr[i].setdata();
    }

    cout <<endl<< "========== Hotel Information =========="<<endl;
    for (int i = 0; i < n; i++) {
        arr[i].displaydata();
    }
    


    return 0;
}