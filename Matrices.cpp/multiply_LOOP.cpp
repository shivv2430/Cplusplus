#include <iostream>
using namespace std;

int main()
{
    int n1, m1, n2, m2;

    // Size of Matrix A
    cout << "Enter rows of Matrix A: ";
    cin >> n1;
    cout << "Enter columns of Matrix A: ";
    cin >> m1;

    // Size of Matrix B
    cout << "Enter rows of Matrix B: ";
    cin >> n2;
    cout << "Enter columns of Matrix B: ";
    cin >> m2;

    // Condition for multiplication
    if(m1 != n2)
    {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    int A[n1][m1], B[n2][m2], C[n1][m2];

    // Input Matrix A
    cout << "Enter elements of Matrix A:\n";
    for(int i=0;i<n1;i++)
        for(int j=0;j<m1;j++)
            cin >> A[i][j];

    // Input Matrix B
    cout << "Enter elements of Matrix B:\n";
    for(int i=0;i<n2;i++)
        for(int j=0;j<m2;j++)
            cin >> B[i][j];

    // Multiplication using loops
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            C[i][j] = 0;
            for(int k=0;k<m1;k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    cout << "Result Matrix C:\n";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
