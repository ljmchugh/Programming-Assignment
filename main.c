/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
 
/* 
 * File:   main.c
 * Author: 171984
 *
 * Created on 26 May 2017, 10:59
 */
 
#include <stdio.h>
#include <stdlib.h>
#include "Calculations.h" 
/*
 * 
 */




int main(int argc, char** argv) {
    float operand1,operand2;
    char operator;    
    int running=1;
    double lastResult=0 ;
    char answer='N';
    while (running){
    printf("Please enter one of the following operations\n\t+)Addition\n\t-)Subtraction\n\t/)Division\n\tx)Multiplication\n\tv)Root\n\t^)Power\n\t%%)Percentage\nOr enter Q to quit\n");    
    scanf (" %c", &operator);
    if (operator=='Q'||operator=='q'){
        running=0;
        continue; //Program will no longer ask for values, and will exit the loop. 
    }
    // Program will give the user the option to use the last result.
    
    if (answer=='Y'||answer=='y'){
        operand1=lastResult;
        
    }
    else if (answer=='N'||answer=='n'){
         
        printf("Please enter a value\n");    
        scanf ("%f", &operand1);
    }
    printf("Please enter a second value\n");    
    scanf ("%f", &operand2);
       
    switch (operator){
        case '+': lastResult=PrintAddition(operand1,operand2); break;
        case '-': lastResult=PrintSubtraction (operand1,operand2); break;
        case '/': lastResult=PrintDivision (operand1,operand2); break;
        case '*': 
        case 'x': 
        case 'X': lastResult=PrintMultiplication (operand1,operand2); break;
        case '^': lastResult=PrintPower (operand1, operand2); break;
        case 'v': 
        case 'V': lastResult=PrintRoot (operand1, operand2); break;
        case '%': lastResult=PrintPercentage (operand1, operand2); break;
        default: printf ("%c The operation you entered is not supported",operator);
    }
    printf ("\n");
    
    printf("Would you like to use last result? Y/N\n");
        scanf (" %c", &answer);
    
    }
    
    
               
             
             
             
 
    scanf("");
    return (EXIT_SUCCESS);
}

