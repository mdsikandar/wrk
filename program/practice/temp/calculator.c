/**
 * @file      : calculator.c
 * @brief     : Do arithmatic opertion using callback function.
 * @author    : md sikandar (md.sikandar@vvdntech.in)
 * @copyright : (c)2017, VVDN Technologies Pvt. Ltd.
 *              Permission is hereby granted to everyone in VVDN Technologies
 *
 */

/* Header files */
#include <stdio.h>
#include <stdio_ext.h>

/* Macro Defination */
#define     SUCCESS

/**
 * @function : do_arithmatic
 * @param1   : int value
 * @param2   : int value
 * @param3   : int value
 * @param4   : int value
 * @param5   : fun_ptr - function pointer for function address
 * @return   : result
 * @brief    : This function will take two input values and one function address
 *             and call the specific function for operation.
 */

void do_arithmatic (int num1_nm, int num1_dn, int num2_nm,
        int num2_dn, void (*fun_ptr)(int, int, int, int))
{
    return (*fun_ptr)(num1_nm, num1_dn, num2_nm, num2_dn);  /* return the function  */

}
/**
 * @function   : display
 * @param1     : pointer for int
 * @param2     : porinter for int
 * @brief      : display the result in actual and reduced value
 */
void display (int *nume_val, int *deno_val)
{
    int nume = *nume_val, deno = *deno_val;
    int min = 0, loop = 0;

    printf("The value is %d/%d\n", nume, deno);
    /* converting in reduced format */
    min = (nume < deno) ? nume : deno;
    for ( loop = 2; loop <= min; loop++) {
        if ((nume % loop == 0 ) && (deno % loop == 0)) {
            nume = nume / loop;
            deno = deno / loop;
        }
    }
    printf("The reduced result %d/%d\n", nume, deno);
}
/**
 * @function   : add
 * @param1     : int value
 * @param2     : int value
 * @param3     : int value
 * @param4     : int value
 * @brief      : do addtion operation
 */

void add (int num1_nm, int num1_dn, int num2_nm, int num2_dn)
{
    /* Initialize and declare the variable */
    int nume_val = 0, deno_val = 0;

    /* performing addition */
    nume_val = (num1_nm * num2_dn) + ( num2_nm * num1_dn);
    deno_val = num1_dn * num2_dn;
    display (&nume_val, &deno_val); /* calling display function */
}
/**
 * @function   : subtract
 * @param1     : int value
 * @param2     : int value
 * @param3     : int value
 * @param4     : int value
 * @brief      : do Subtract operation
 */

void subtract (int num1_nm, int num1_dn, int num2_nm, int num2_dn)
{
    /* Initialize and declare the variable */
    int nume_val = 0, deno_val = 0;

    /* Performing subtraction */
    nume_val = (num1_nm * num2_dn) - ( num2_nm * num1_dn);
    deno_val = num1_dn * num2_dn;
    /* calling display function to show output */
    display (&nume_val, &deno_val);
}
/**
 * @function   : multiply
 * @param1     : int value
 * @param2     : int value
 * @param3     : int value
 * @param4     : int value
 * @brief      : do multiplication
 */

void multiply (int num1_nm, int num1_dn, int num2_nm, int num2_dn)
{
    int nume_val = 0, deno_val = 0;

    /* performing multiply operation */
    nume_val = num1_nm * num2_nm;
    deno_val = num1_dn * num2_dn;
    /* calling display function to show output */
    display (&nume_val, &deno_val);
}
/**
 * @function   : divide
 * @param1     : int value
 * @param2     : int value
 * @param3     : int value
 * @param4     : int value
 * @brief      : do Division
 */

void divide (int num1_nm, int num1_dn, int num2_nm, int num2_dn )
{
    int nume_val = 0, deno_val = 0;

    /* performing divide operation */
    nume_val = num1_nm * num2_dn;
    deno_val = num1_dn * num2_nm;
    /* calling display function to show output */
    display (&nume_val, &deno_val);
}

int main ()
{
    int num1_nm = 0, num1_dn = 0, num2_nm = 0, num2_dn = 0;
    char choice;

    /* Input the numerator and denominator of two rational number */
    printf("Enter the numerator of first number\n");
    __fpurge(stdin);
    while (scanf("%d", &num1_nm) != 1) {
        printf("Enter a integer value\n");
        while (getchar() != '\n');
    }
    printf("Enter the denominator of first number\n");
    __fpurge(stdin);
    while (scanf("%d", &num1_dn) != 1) {
        printf("Enter a integer value\n");
        while (getchar() != '\n');
    }
    printf("Enter the numerator of second number\n");
    __fpurge(stdin);
    while (scanf("%d", &num2_nm) != 1) {
        printf("Enter a integer value\n");
        while (getchar() != '\n');
    }
    printf("Enter the denominator of second number\n");
    __fpurge(stdin);
    while (scanf("%d", &num2_dn) != 1) {
        printf("Enter a integer value\n");
        while (getchar() != '\n');
    }
    /* Taking user choice for arithmatic operatiom */
    printf("Enter the choice for arithmetic operation\n");
    printf("Add: + Subtract: - Multiply: * Divide:/ Quit: q\n");
    getchar();
    scanf("%c", &choice);
    switch (choice) {
        case '+' :
            do_arithmatic(num1_nm, num1_dn, num2_nm, num2_dn, add);
            break;
        case '-' :
            do_arithmatic(num1_nm, num1_dn, num2_nm, num2_dn, subtract);
            break;
        case '*' :
            do_arithmatic(num1_nm, num1_dn, num2_nm, num2_dn, multiply);
            break;
        case '/' :
            do_arithmatic(num1_nm, num1_dn, num2_nm, num2_dn, divide);
            break;
        default :
            if (choice == 'q') {
                printf("Exit from the program");
            }
            else {
                printf("Wrong input..");
            }
            break;
    }
    return SUCCESS;
}
