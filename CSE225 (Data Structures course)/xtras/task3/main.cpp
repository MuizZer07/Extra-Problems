#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    dynarr d;

    int row, col;

    cout << "Enter number of rows: "; cin >> row;
    cout << "Enter number of columns: "; cin >> col;

    d.allocate(row, col);

    for(int i = 0; i< row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            int number;
            cout << "Input (" << i << "," << j << ") :"; cin >> number;
            d.set(i,j, number);
        }
    }

    cout << "Your matrix: " << endl;
    for(int i = 0; i< row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            int number;
            cout << "input (" <<i << "," <<j << ") :" << d.get(i,j) << " ";
        }
        cout << endl;
    }

    return 0;
}
