#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], sum[10][10], sub[10][10], mul[10][10];
    int r, c, i, j, k;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    // Addition and Subtraction
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    // Multiplication
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for(k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display Addition
    cout << "\nAddition of Matrices:\n";
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    // Display Subtraction
    cout << "\nSubtraction of Matrices:\n";
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            cout << sub[i][j] << "\t";
        }
        cout << endl;
    }

    // Display Multiplication
    cout << "\nMultiplication of Matrices:\n";
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            cout << mul[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
