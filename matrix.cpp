/* 
 * File:   matrix.cpp
 * Author: Marlon
 * 
 * Created on 29 de Abril de 2015, 09:45
 */

#include "matrix.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

matrix::matrix() {
}
matrix::matrix(int m, int n) 
{
    this->m = m;
    this->n = n;   
    matrix::new_matrix();
}

void matrix::new_matrix() 
{
    matriz = new int*[m];
    for(int i = 0; i<m;i++)
    {
        matriz[i] = new int[n];        
    }

}
void matrix::set_matrix()
{
    int op;
    cout << "1 - Manual - 2 - Automatic\n";
    cin >> op;
    switch (op)
    {
        case 1:
            for (int i=0;i<m;i++)
            {
                for (int j=0;j<n;j++)
                {
                    cin >> matriz[i][j];
                }
            }
            break;
        case 2:
            for (int i=0;i<m;i++)
            {
                for (int j=0;j<n;j++)
                {
                   matriz[i][j] = rand()%10;
                }
              
            }
            break;
        default:
            cout << "Unavailable";
            break;
    }
    
}
void matrix::get_matrix()
{
    for(int i = 0; i< m; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}
void matrix::size()
{
    cout << "Linha: " << m ;
    cout << "Coluna: " << n;
}
int matrix::get_linha()
{
    return m;
}
int matrix::get_coluna()
{
    return n;
}
int matrix::get_item(int m, int n)
{
    return matriz[m][n];
}
void matrix::set_item(int m, int n, int item)
{
    matriz[m][n] = item;
}
matrix::matrix(const matrix& orig) {
}

matrix::~matrix() {
}

