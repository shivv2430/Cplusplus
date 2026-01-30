#include <iostream>
using namespace std;

int main()
{
    int row1, column1, row2, column2;

    cout << "Enter rows of Matrix A: ";
    cin >> row1;
    cout << "Enter columns of Matrix A: ";
    cin >> column1;

    cout << "Enter rows of Matrix B: ";
    cin >> row2;
    cout << "Enter columns of Matrix B: ";
    cin >> column2;

    int A[row1][column1], B[row2][column2], C[row1][column2];

    // Input A
    cout << "Enter Matrix A : ";
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin >> A[i][j];
        }
    }
    // Input B
    cout << "Enter Matrix B : ";
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cin >> B[i][j];
        }
    }

// ** CONDITION **//
    if(column1 == row2)
    {
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<column2;j++)
            {
                C[i][j] = 0;

                for(int k=0;k<column1;k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Display Result
        cout << "Result Matrix C:\n";
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<column2;j++)
            {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Matrix multiplication not possible!";
    }

    return 0;
}
