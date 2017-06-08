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

// Prints out a welcome message
void printWelcomeMessage(){    
    printf ("  ___   __   __     ___  _  _  __     __   ____   __   ____ \n");
    printf (" / __) / _\\ (  )   / __)/ )( \\(  )   / _\\ (_  _) /  \\ (  _ \\\n");
    printf ("( (__ /    \\/ (_/\\( (__ ) \\/ (/ (_/\\/    \\  )(  (  O ) )   /\n");
    printf (" \\___)\\_/\\_/\\____/ \\___)\\____/\\____/\\_/\\_/ (__)  \\__/ (__\\_)\n\n");
    printf ("Procedural Programming, by Luke McHugh\n\n");
}

// Prints a list of operations for the user 
void printUserOptions(){    
    printf ("Please enter one of the following operations\n");
    printf ("\t+)Addition\n");
    printf ("\t-)Subtraction\n");
    printf ("\t/)Division\n\tx)Multiplication\n");
    printf ("\tv)Root\n");
    printf ("\t^)Power\n");
    printf ("\t%%)Percentage\n");
    printf ("Or enter Q to quit\n");
}

int main(int argc, char** argv) {
    // these variables store input from the user 
    double operand1,operand2;
    char operator;
    // this variable determines when to end the loop, and quit the application    
    int running=1;
    double lastResult=0 ;
    // determines whether the last result is used or not
    char answer='N';    // Answer is set to "no" the first time the loop is executed 
    
    printWelcomeMessage();
    
    // This is the applications main loop, and will run until (running) is set to 0
    while (running){
        printUserOptions();
        scanf (" %c", &operator);
        // When the user enters "Q", the application will quit.                
        if (operator=='Q'||operator=='q'){  
            running=0;
            continue;  //Program will no longer ask for values, and will exit the loop. 
        }

        // Program will give the user the option to use the last result.
        if (answer =='Y'||answer =='y') operand1=lastResult;
        else if (answer =='N'||answer =='n'){
            printf("Please enter a value\n");    
            scanf ("%f", &operand1);
        }
        printf("Please enter a second value\n");    
        scanf ("%f", &operand2);
        
        // A list of potential conditionals for various mathematical equations.
        switch (operator){
            case '+': lastResult=PrintAddition(operand1,operand2); break;
            case '-': lastResult=PrintSubtraction (operand1,operand2); break;
            case '/': lastResult=PrintDivision (operand1,operand2); break;
            // Multiple input methods that will result in the same operation. 
            case '*': 
            case 'x': 
            case 'X': lastResult=PrintMultiplication (operand1,operand2); break;
            case '^': lastResult=PrintPower (operand1, operand2); break;
            case 'v': 
            case 'V': lastResult=PrintRoot (operand1, operand2); break;
            case '%': lastResult=PrintPercentage (operand1, operand2); break;
            default: printf ("%c The operation you entered is not supported",operator);
        }
        
        // The user is asked whether to continue with the last result as the first operand. 
        printf("\nWould you like to use last result? (Y/N)\n");
        scanf (" %c", &answer);
    }
    return (EXIT_SUCCESS);
}

