/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */




#include <stdio.h>
#include <math.h>


double PrintAddition (double op1,double op2){
    double result=op1+op2;
    printf ("%lg+%lg=%lg",op1,op2,result);
    return result;
}

double PrintSubtraction (double op1,double op2){
    double result=op1-op2;
    printf ("%lg-%lg=%lg",op1,op2,result);
    return result;
}

double PrintDivision (double op1,double op2){
    double result=op1/op2;
    printf ("%lg/%lg=%lg",op1,op2,result);
    return result;
}

double PrintMultiplication (double op1,double op2){
    double result=op1*op2;
    printf ("%lgx%lg=%lg",op1,op2,result);
    return result;
}

double PrintPower (double op1,double op2){
    double result=powl(op1,op2);
    
    printf ("%lg^%lg=%lg",op1,op2,result);
    return result;
}

double PrintRoot (double op1,double op2) {
    double result=powl (op1, 1/op2);
    
    printf ("%lgv%lg=%lg",op1,op2,result);
    return result;
}

double PrintPercentage (double op1,double op2){
    double result=op1/100*op2;
    printf ("%lg%%%lg=%lg",op1,op2,result);
    return result;
}


//http://www.cplusplus.com/reference/cstdio/printf/?kw=printf  g=float l=long double=long float

//g = Float without trailing 0's. 