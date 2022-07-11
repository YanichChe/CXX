#include <iostream>
#include <vector>
using namespace std;

class Matrix
{
private:
    int rowNumber;
    int columnNumber;
public:
    int **matrix;
    int *GetRow(int rowIndex)
    {
        return matrix[rowIndex];
    }

    int *GetColumn(int columnIndex)
    {
        int *column = new int(rowNumber);

        for (int i = 0; i < rowNumber; i++)
        {
            column[i] = matrix[i][columnIndex];
        }

        return column;
    }

    int GetRowNumber()
    {
        return rowNumber;
    }

    int getColumnNumber()
    {
        return columnNumber;
    }

    void Input()
    {
        for (int i = 0; i < rowNumber; i++)
        {
            for (int j = 0; j < columnNumber; j++)
            {
                cin >> matrix[i][j];
            }
        }
    }

    void Print()
    {
        for (int i = 0; i < rowNumber; i++)
        {
            for (int j = 0; j < columnNumber; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }

    Matrix(int rowNumber, int columnNumber)
    {
        matrix = new int*[rowNumber]; 
        for (int i = 0; i < rowNumber; i++)
            matrix[i] = new int[columnNumber];

        this->rowNumber = rowNumber;
        this->columnNumber = columnNumber;
    }
};

bool CheckSum(int rowN1, int colN1, int rowN2, int colN2)
{
    if (rowN1 == rowN2 && colN1 == colN2)
        return true;
    
    return false;
}

bool CheckMul(int rowN1, int colN1, int rowN2, int colN2)
{
    if (rowN1 == colN2 && colN1 == rowN2)
        return true;
    
    return false;
}

void InputMatrixSize(int* rowNumber, int* columnNumber)
{
    cin >> *rowNumber;
    cin >> *columnNumber;
}

Matrix Sum(Matrix matrix1, Matrix matrix2)
{   
    int rowNumber = matrix1.GetRowNumber();
    int columnNumber = matrix1.getColumnNumber();
    
    Matrix result(rowNumber, columnNumber);

    for (int i = 0; i < rowNumber; i++)
    {
        for (int j = 0; j < columnNumber; j++)
        {
            result.matrix[i][j] = matrix1.matrix[i][j]+matrix2.matrix[i][j];
        }
    }

    return result;
}

int main(void)
{
    int rowNumber, columnNumber;

    InputMatrixSize(&rowNumber, &columnNumber);
    Matrix matrix1(rowNumber, columnNumber);
    matrix1.Input();

    InputMatrixSize(&rowNumber, &columnNumber);
    Matrix matrix2(rowNumber, columnNumber);
    matrix2.Input();

    Matrix result = Sum(matrix1, matrix2);
    result.Print();
    
    return EXIT_SUCCESS;
}