/* 
 * File:   matrix.h
 * Author: Marlon
 *
 * Created on 29 de Abril de 2015, 09:45
 */

#ifndef MATRIX_H
#define	MATRIX_H

class matrix {
public:
    matrix();
    matrix(const matrix& orig);
    virtual ~matrix();
    void size();
    void new_matrix();
    void preencher_matrix();
    void show_matrix();
    matrix(int m, int n);
    int get_linha();
    int get_coluna();
private:
    int **matriz;
    int m;
    int n;
};

#endif	/* MATRIX_H */

