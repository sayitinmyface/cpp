#include <iostream>
using namespace std;
void multiArray()
{
    int row,col;
    char char_row='A',char_col;
    cout << "enter row and col : ";
    cin >> row >> col;
    char **ptr_matrix = new char *[row];
    for (int i = 0; i < row; i++)
    {
        ptr_matrix[i] = new char[col];
    }
    // 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ptr_matrix[i][j] = char_row++;
        }
    }
    // 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ptr_matrix[i][j];
        }
        cout << endl;
        
    }
    delete [] ptr_matrix;

}