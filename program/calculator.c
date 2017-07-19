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
 * @param3   : fun_ptr - function pointer for function address
 * @return   : result
 * @brief    : This function will take two input values and one function address
 *             and call the specific function for operation.
 */
int do_arithmatic (int num1_nm, int num1_dn, int num2_nm,
        int num2_dn, void (*fun_ptr)(int, int, int, int))
{
    return (*fun_ptr)(num1_nm, num1_dn, num2_nm, num2_dn);  /* return the function  */

}


void add (int num1_nm, int num1_dn, int num2_nm, int num2_dn)
{
    /* Initialize and declare the variable */
    int nume_val = 0, deno_val = 0;

    nume_val = (num1_nm * num2_dn) + ( num2_nm * num1_dn);
    deno_val = num1_dn * num2_dn;
    display (&nume_val, &deno_val);
}

void subtract (int num1_nm, int num1_dn, int num2_nm, int num2_dn)
{
    /* Initialize and declare the variable */
    int nume_val = 0, deno_val = 0;

    nume_val = (num1_nm * num2_dn) - ( num2_nm * num1_dn);
    deno_val = num1_dn * num2_dn;
    /* calling display function to show output */
    display (&nume_val, &deno_val);
}


void multiply (int num1_nm, int num1_dn, int num2_nm, int num2_dn)
{
    int nume_val = 0, deno_val = 0;

    nume_val = num1_nm * num2_nm;
    deno_val = num1_dn * num2_dn;
    /* calling display function to show output */
    display (&nume_val, &deno_val);
}

void divide (int num1_nm, int num1_dn, int num2_nm, int num2_dn)
{
    int nume_val =0, int deno_val = 0;

    nume_val = num1_nm * num2_dn;
    deno_val = num1_dn * num2_nm;
    /* calling display function to show output */
    display (&nume_val, &deno_val);
}

void display (int *nume_val, int *deno_val)
{
    int nume = *nume_val, deno = *deno_val;
    int min = 0, loop = 0;

    printf("The value is %d/%d\n", nume, deno);
    min = (nume <= deno) ? nume : deno;
    for ( loop = 2; loop < min; loop++) {
        if (nume % loop == 0 && deno % loop == 0) {
            nume = nume / loop;
            deno = deno / loop;
        }
    }
    printf("The reduced result %d/%d\n", nume, deno);
}

int main ()
{
    int num1_nm = 0 , num1_dn = 0, num2_nm = 0, num2_dn = 0;
    int check = 0;
    char choice;
    printf("Enter the first numerator of first number\n");
    scanf("%d", &num1_nm);
    printf("Enter the denominator of first number\n");
    scanf("%d", &num1_dn);
    printf("Enter the numerator of second number\n");
    scanf("%d", &num2_nm);
    printf("Enter the denominator of second number\n");
    scanf("%d", &num2_dn);

    printf("Enter the choice for arithmetic operation");
    printf("Add: +\tSubtract: -\tMultiply: *\tDivide:/ \t Quit: q\n");
    scanf("%d", &choice);
    switch (choice) {
        case '+' :
            
    

    return SUCCESS;
}

