#include <iostream>
using namespace std;
void multiArray()
{
    int row,col;
    char char_row,char_col;
    // 
    cout << "enter row and col :";
    cin >> row >> col;
    cout << "display row :"; cin >> char_row;
    cout << "display col :"; cin >> char_col;
    cout << "matrix size : " << row*col << endl;
    // 
    char ** ptr_matrix = new char * [row];
    for (int i = 0; i < row; i++) ptr_matrix[i] = new char[col];
    // 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==0||i==row-1)
            {
                ptr_matrix[i][j] = char_col;      
            }
            else 
            {
                if(j==0||j==col-1)
                {
                    ptr_matrix[i][j] = char_col;      
                }
                else
                {
                    if (j%2==0)
                    {
                        ptr_matrix[i][j] = char_row;      
                    }
                    else
                    {
                        ptr_matrix[i][j] = ' ';      
                    }
                    
                }
            }
        }
    }
    // 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ptr_matrix[i][j];
            cout << " ";
        }
        cout << endl;
    }
    delete[] ptr_matrix;
}