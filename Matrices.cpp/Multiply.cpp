#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter no. of rows : ";
    cin>>n;

     cout<<"Enter no. of columns : ";
    cin>>m;

    int A[n][m], B[n][m], C[n][m];

    // Input Matrix A
    cout << "Enter elements of Matrix A : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "Enter elements of Matrix B : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> B[i][j];
        }
    }

    // Multiply matrices
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            C[i][j] = 0;
            for(int k=0; k<m; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    cout << "Result Matrix A : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;

    cout << "Result Matrix B : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;

    cout << "Result Matrix C : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;

    return 0;
}
