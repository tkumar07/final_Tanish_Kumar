#include <iostream>
#include "matrix.h"
#include <vector>


Matrix matrixAdd(const Matrix & matrix_1, const Matrix & matrix_2)
{
    int m1rows = matrix_1.size();
    int m1cols = matrix_1[0].size();
    
    int m2rows = matrix_2.size();
    int m2cols = matrix_2[0].size();
    
    
    if(m1rows != m2rows || m1cols != m2cols)
    {
        throw std::invalid_argument("-1");
    }
    
    Matrix m3 = matrix_1;
    
    
    int rows = m1rows;
    int cols = m1cols;
    
    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            m3[i][j] = 0;
        }
    }
    
    
    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            m3[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }
    
    return m3;
}


Matrix matrixMultiply(const Matrix & matrix_1, const Matrix & matrix_2)
{

}
