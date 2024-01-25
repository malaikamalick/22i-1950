#include<iostream>
using namespace std;


void Input(int A[][100], int m, int n) 
{
    cout << "Elements of the matrix :" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            cout << "Element A [" << i << "] [" << j << "] : ";
            cin >> A[i][j];
        }
    }
}


int Sum(int A[][100], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            sum += A[i][j];
        }
    }
    return sum;
}


void Row_Sum(int A[][100], int m, int n)
{
    cout << "Row-wise Sum :" << endl;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += A[i][j];
        }
        cout << "Sum of rows " << i << " : " << rowSum << endl;
    }
}


void Column_Sum(int A[][100], int m, int n) 
{
    cout << "Column-wise Sum :" << endl;
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += A[i][j];
        }
        cout << "Sum of column " << j << " : " << colSum << endl;
    }
}


void Transpose(int A[][100], int m, int n) 
{
    cout << "Transpose :" << endl;
    for (int j = 0; j < n; j++) 
    {
        for (int i = 0; i < m; i++) 
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void Display(int A[][100], int m, int n)
{
    cout << "Elements are :" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}


int main() 
{
    int m, n;
    int A[100][100];

    cout << "Number of rows : " << endl;
    cin >> m;
    cout << "Number of columns : " << endl;
    cin >> n;

    int choice;

    do 
    {
        cout << "**************************> MENU <************************** : " << endl;
        cout << "1. Input Matrix : " << endl;
        cout << "2. Sum of Matrix : " << endl;
        cout << "3. Row-wise Sum : " << endl;
        cout << "4. Column-wise Sum : " << endl;
        cout << "5. Transpose Matrix : " << endl;
        cout << "6. Display Matrix : " << endl;

        cout << "7. Exit " << endl;

        cout << "Your choice : " << endl;
        cin >> choice;

        switch (choice) 
        {
        case 1:
            Input(A, m, n);
            break;

        case 2:
            cout << "Sum of matrix : " << Sum(A, m, n) << endl;
            break;

        case 3:
            Row_Sum(A, m, n);
            break;

        case 4:
            Column_Sum(A, m, n);
            break;

        case 5:
            Transpose(A, m, n);
            break;

        case 6:
            Display(A, m, n);
            break;

        case 7:
            cout << "Exit your program..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again... " << endl;
        }

    } while (choice != 7);

    return 0;
}
