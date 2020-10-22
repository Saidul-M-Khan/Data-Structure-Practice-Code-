#include<iostream>
using namespace std;

int main()
{
    int list_of_elements[100];
    int value;
    int position = -1;
    int index;
    int number_of_elements;
    int item;

    cout << "Size of the array : ";
    cin >> number_of_elements;
    cout << "[+] Input data in the array " << endl;

    for(item=0; item < number_of_elements; item++)
    {
        cin >> list_of_elements[item];
    }

    cout << "Enter the value that you want to search : ";
    cin >> value;

    for(index=0; index < number_of_elements; index++)
    {
        if(value == list_of_elements[index])
        {
            position = index + 1;
            break;
        }
    }
    if(position == -1)
    {
        cout << " " <<endl;
        cout << "\t\t\t[Result]\t\t\t" <<endl;
        cout << " "<<endl;
        cout << "The value is not found." <<endl;
    }
    else
    {
        cout << " " <<endl;
        cout << "\t\t\t[Result]\t\t\t" <<endl;
        cout << " " <<endl;
        cout << "We found the value at position " << position <<endl;
    }


}
