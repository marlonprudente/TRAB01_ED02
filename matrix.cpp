/* 
 * File:   matrix.cpp
 * Author: Marlon
 * 
 * Created on 29 de Abril de 2015, 09:45
 */

#include "matrix.h"
#include <iostream>
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
void matrix::preencher_matrix()
{
    
}
void matrix::show_matrix()
{
    for(int i = 0; i< m; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout << matriz[i][j];
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

matrix::matrix(const matrix& orig) {
}

matrix::~matrix() {
}

