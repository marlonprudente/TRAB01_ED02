/* 
 * File:   main.cpp
 * Author: Marlon Prudente
 * marlonmateuspr@gmail.com
 * Trabalho de Estruturas de Dados 02
 * Created on 29 de Abril de 2015, 09:38
 */

#include <cstdlib>
#include <iostream>
#include "matrix.h"

using namespace std;

/*
 * Multiplicação de Matrizes por força bruta e por divisão e conquista.
 */

void forca_bruta(matrix m, matrix n)
{
    //matrix r = matrix(m.get_linha(),n.get_coluna());
    matrix r = matrix(3,3);
    int somaprod;
    cout << "Here!";
    for(int mi = 0; mi < m.get_linha(); mi++)
    {
        for(int nj = 0; nj < n.get_coluna(); nj++)
        {
         somaprod = 0;
         for(int i=0; i<m.get_linha(); i++) 
            somaprod += m.get_item(mi,i) * n.get_item(i,nj); 
            r.set_item(mi,nj,somaprod);       
        }
    }
    r.get_matrix();
};
void divide_conquer();

int main(int argc, char** argv) {
    
   // cout << "Olá Mundo!";
    matrix  m = matrix(3,3), n = matrix(3,3);    
    m.set_matrix();
    n.set_matrix();
    //cout << "Item na posicao 3x3: " << m.get_item(3,3);
    forca_bruta(m,n);
    //t.get_matrix();

    return 0;
}

