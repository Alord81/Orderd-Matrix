#include <iostream>
#include <iomanip>

using namespace std;

void FullArrayWithOrderdNumber(short arr[3][3], short rows, short cols)
{
    int Counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Counter++;
            arr[i][j] = Counter;
        }
    }
}


void PrintArrayInMatrix(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(2) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    short arr[3][3];
    short cols = 3, rows = 3;

    FullArrayWithOrderdNumber(arr,rows,cols);

    cout << "The following is a 3x3 ordered matrix:\n";

    PrintArrayInMatrix(arr, rows, cols);
    return 0;
}