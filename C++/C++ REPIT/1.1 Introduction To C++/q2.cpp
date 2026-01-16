#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    for (int i=a;  i<=b; i++)
    {
        if (i%4 ==0)
        {
            cout<<" "<<i;
        }
        
    }
    



    return 0;
}