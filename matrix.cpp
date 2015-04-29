/* 
 * File:   matrix.cpp
 * Author: Marlon
 * 
 * Created on 29 de Abril de 2015, 09:45
 */

#include "matrix.h"
using namespace std;

matrix::matrix() {
}
matrix::matrix(int m, int n) {
    this m = m;
    this n = n;
    matrix = new int**[m];
  for (int i=0; i<m; i++) {
      matrix[i] = new int*[n];
      for (int j=0; j<n; j++) {
          matrix[i][j] = 0;
       }
  }
    
}

matrix::size()
{
    cout << "Linha: " << m ;
    cout << "Coluna: " << n;
}
matrix::get_linha()
{
    return m;
}
matrix::get_coluna()
{
    return n;
}

matrix::matrix(const matrix& orig) {
}

matrix::~matrix() {
}

