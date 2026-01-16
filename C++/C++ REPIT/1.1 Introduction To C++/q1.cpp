#include <iostream>
using namespace std;

int main()
{
    int size, i;

    cout << "Enter array size: ";
    cin >> size;

    int a[size];

    cout << "Enter array elements:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
    cout << "Even elements of an Array: ";
    for (int i=0; i<size; i++)
    {
        if (a[i]%2 ==0)
        {
            cout<<a[i]<<",";
        }
        
    }
    

    
    return 0;
}