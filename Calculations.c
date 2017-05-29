/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */




#include <stdio.h>
#include <math.h>


void PrintAddition (double op1,double op2){
    double result=op1+op2;
    printf ("%lg+%lg=%lg",op1,op2,result);
}

void PrintSubtraction (double op1,double op2){
    double result=op1-op2;
    printf ("%lg-%lg=%lg",op1,op2,result);
}

void PrintDivision (double op1,double op2){
    double result=op1/op2;
    printf ("%lg/%lg=%lg",op1,op2,result);
}

void PrintMultiplication (double op1,double op2){
    double result=op1*op2;
    printf ("%lgx%lg=%lg",op1,op2,result);
}

void PrintPower (double op1,double op2){
    double result=powl(op1,op2);
    
    printf ("%lg^%lg=%lg",op1,op2,result);
}

void PrintRoot (double op1,double op2) {
    double result=powl (op1, 1/op2);
    
    printf ("%lgv%lg=%lg",op1,op2,result);
}

void PrintPercentage (double op1,double op2){
    double result=op1/100*op2;
    printf ("%lg%%%lg=%lg",op1,op2,result);
}