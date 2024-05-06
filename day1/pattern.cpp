#include <iostream>
using namespace std;

void printReactAnglePattern(void)
{
    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void hollowReactAnglePattern(void)
{
    int rows, cols;
    cin >> rows >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows)
            {
                cout << "*";
            }
            else if (j == 1 || j == cols)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void invertedHalfPyramid(void)
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void invertedHalfPyramidNumbers(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i
                 << " ";
        }
        cout << endl;
    }
}

void fyoldsTrangle(void)
{
    int n;
    cin >> n;
    int counter = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << counter
                 << " ";
            counter++;
        }
        cout << endl;
    }
}

void halfPyramidRotated(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void butterFlyPattern(void)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int k = 0; k <= space; k++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int k = 0; k <= space; k++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}


int main()
{
    // printReactAnglePattern();
    // hollowReactAnglePattern();
    // invertedHalfPyramid();
    // invertedHalfPyramidNumbers();
    // fyoldsTrangle();
    // butterFlyPattern();
// halfPyramidRotated();
    return 0;
}
