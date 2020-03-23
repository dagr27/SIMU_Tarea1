#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void){
    Matrix m, resultante, trans, inver;
    zeroes(m,3);
    m.at(0).at(0)=2;
    m.at(0).at(1)=2;
    m.at(0).at(2)=3;
    
    m.at(1).at(0)=4;
    m.at(1).at(1)=5;
    m.at(1).at(2)=6;
    
    m.at(2).at(0)=7;
    m.at(2).at(1)=8;
    m.at(2).at(2)=9;
    
    
    //showMatrix(m);
    
    int det = determinant(m);
    
    cofactors(m, resultante);
    
    transpose(resultante, trans);
    
    convertInverse(trans,inver,det);
    
    showMatrix(inver);
    
    
}