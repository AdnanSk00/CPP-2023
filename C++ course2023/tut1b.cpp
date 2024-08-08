//  *************************       MATRIX OPERATIONS      ************************

#include <iostream>
using namespace std;

class Matrix
{
    int a[10][10], b[10][10], c[10][10], row, colm, i, j, k, add;
public:
    void hold(void);
    void sum(void);
    void sub(void);
    void trans(void);
    void mul(void);
    
} opr;

void Matrix ::hold()
{    
    cout << "Enter the quantity of rows of matrices : ";
    cin >> row;
    cout << "Enter the quantity of columns of matrices : ";
    cin >> colm;

    cout << "Enter the elements of first matrix : " << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            cout << "a" << i << j << " = ";
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            if (j == 1)
            {
                cout << "		| ";
            }
            cout << a[i][j] << " ";
        }
        cout <<"|" << endl;
    }
    cout << "Enter the elements of second matrix : " << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            cout << "b" << i << j << " = ";
            cin >> b[i][j];
        }
    }
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            if (j == 1)
            {
                cout << "		| ";
            }
            cout << b[i][j] << " ";
        }
        cout <<"|" << endl;
    }
}

void Matrix ::sum()
{
    cout << "The Addition of two matrices are : " << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            if (j == 1)
            {
                cout << "		| ";
            }
            cout << c[i][j] << " ";
        }
        cout <<"|" << endl;
    }
}

void Matrix ::sub()
{
    cout << "The Subtraction of two matrices are : " << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            if (j == 1)
            {
                cout << "		| ";
            }
            cout << c[i][j] << " ";
        }
        cout <<"|" << endl;
    }
}

void Matrix ::trans()
{
    cout << "The Transpose of First Matrix is : " << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            if (j == 1)
            {
                cout << "		";
            }
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    cout << "The Transpose of Second Matrix is : " << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            if (j == 1)
            {
                cout << "		| ";
            }
            cout << b[j][i] << " ";
        }
        cout <<"|" << endl;
    }
}

void Matrix ::mul()
{
    cout << "\nThe Multiplication of above two matrices is : " << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            if (j == 1)
            {
                cout << "		| ";
            }
            add = 0;
            for (k = 1; k <= row; k++)
            {
                add = add + a[i][k] * b[k][j];
                cout << a[i][k] * b[k][j];
                if (k < row)
                {
                    cout << " + ";
                }
                c[i][j] = add;
            }
            cout << "    ";
        }
        cout <<"|" << endl;
    }

    cout << endl;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colm; j++)
        {
            if (j == 1)
            {
                cout << "		| ";
            }
            cout << c[i][j] << "  ";
        }
        cout <<"|" << endl;
    }
}

int main()
{
    int s;
    Matrix opr; // Object of class Matrix
    cout << " 		*** Matrix Operations *** 			 " << endl<< endl;
    opr.hold();
    cout << "1. Addition \n2. Subtraction \n3. Transpose \n4. Multiplication \n\nSelect any one option : ";
    cin >> s;
    switch (s)
    {
    case 1:
        opr.sum();
        break;
    case 2:
        opr.sub();
        break;
    case 3:
        opr.trans();
        break;
    case 4:
        opr.mul();
        break;
    default:
        cout << " You select invalid option ";
        break;
    }

    return 0;
}