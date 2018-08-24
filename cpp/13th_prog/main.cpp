#include <iostream>

using namespace std;

int main()
{
    //Arrays
    int myArray[5] = {10, 5, 7, 2, 0};

    int x;
    for(x=0; x<5; x++)
    {
        cout << myArray[x] << endl;
        cout << myArray[x] * (x+1) << endl;
    }

    int sum = 0;
    for(x=0; x<5; x++)
    {
        sum += myArray[x];
    }
    cout << "total = " << sum << endl;
    cout << endl;

    //Matrices
    int matrix[2][3] = {{1,2,3}, {4,5,6}};
                            // 1 2 3
                            // 4 5 6

    cout << matrix[0][0] << endl;
    cout << endl;

    for(int row=0; row<2; row++)
    {
        for(int column=0; column<3; column++)
        {
            cout << matrix[row][column] << " ";
        }
        cout << endl;
    }

return 0;
}
