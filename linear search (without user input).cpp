#include<iostream>
using namespace std;

int main()
{
    int list_of_elements[] = {0,1,2,3,4,5,6,7,8,9};
    int value;
    int position = -1;
    int index;

    cout << "Enter the value that you want to search : ";
    cin >> value;

    for(index=0; index < sizeof(list_of_elements); index++)
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
