/******************************************************************************
FileName: menu.c
Author: tyf       Version : 1.0         Date: 2017-09-19
Description: this is a simple commond menu program, you can ues below functions
provide by this program.
Function List: 
History:
    <author>    <time>    <version >    <desc> 
    tyf         17/09/19  1.0           create
******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void showMenuList();
void hello();
void add();
void sub();
void multi();
void divi();
void compare();
void bubbleSort();
void contactMe();
void help();
void quit();
int main()
{
    char cmd[256];
    while (1)
    {
        showMenuList(); //show function list
        printf("Please choose function number (0~9):");
        scanf ("%s", cmd); // get function number
        if (strcmp(cmd, "0") == 0)  //exit program
        {
            quit();
        }
        else if (strcmp(cmd, "1") == 0) //say hello
        {
            hello();
        }
        else if (strcmp(cmd, "2") == 0) //add two numbers, and return result 
        {
            add();
        }
        else if (strcmp(cmd, "3") == 0) //sub two numbers, and return result 
        {
            sub();
        }
        else if (strcmp(cmd, "4") == 0) //multi two numbers, and return result 
        {
            multi();
        }
        else if (strcmp(cmd, "5") == 0) //div two numbers, and return result
        {
            divi();
        }
        else if (strcmp(cmd, "6") == 0) //compare two number, show the result
        {
            compare();
        }
        else if (strcmp(cmd, "7") == 0) //Bubble sort
        {
            bubbleSort();
        }
        else if (strcmp(cmd, "8") == 0) //author contact details 
        {
            contactMe();
        }
        else if (strcmp(cmd, "9") == 0) //show help details
        {
            help();
        }
        else                            //error commond
        {
            printf("Error Command! Please enter 0~9.\n");
        }
        printf("Do you want continue(y/n)?");
        scanf("%s",cmd);
        if(strcmp(cmd,"n")==0)
        {
            printf("Thank you!\n");
            return 0;
        }
    }
    return 0;
}

/****************************************************************
Function Name: showMenuList
Description: this method is used for show main menu.
Input: 
Output: 
Others: 
****************************************************************/
void showMenuList()
{
    printf("\n");
    printf("********************************************\n");
    printf("              Main Functions                \n");
    printf("********************************************\n");
    printf(" 1 : Say Hello World!                       \n");
    printf(" 2 : Calculate - Add                        \n");
    printf(" 3 : Calculate - subtract                   \n");
    printf(" 4 : Calculate - multiply                   \n");
    printf(" 5 : Calculate - divide                     \n");
    printf(" 6 : Compare                                \n");
    printf(" 7 : Bubble sort                            \n");
    printf(" 8 : Contact Me                             \n");
    printf(" 9 : help                                   \n");
    printf(" 0 : Exit                                   \n");
    printf("********************************************\n");
}

/****************************************************************
Function Name: bubbleSort
Description: this method is used for show main menu.
Input: 
Output: 
Others: 
****************************************************************/
void bubbleSort()
{
    int i, j, temp, size;
    printf("*****************Bubble sort******************\n");
    printf("please input the size of the array:");
    scanf("%d",&size);
    int a[size];
    printf("please input numbers of the array:");
    for (i = 0; i < size; i++)
    {
        scanf("%d,", &a[i]);
    }
    for (j = 0; j < (size-1); j++)
    {
        for (i = 0; i < (size-j); i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i]; 
                a[i] = a[i + 1]; 
                a[i + 1] = temp;
            }
        }
    }
	printf("Results: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n,");
}

/****************************************************************
Function Name: help
Description: this method is used for show help details.
Input: 
Output: 
Others: 
****************************************************************/
void help()
{
    printf("***************************************************************************\n");
    printf("                Please use below number to choose function                 \n");
    printf("***************************************************************************\n");
    printf("  1: Output 'Hello World!' in screen                                       \n");
    printf("  2: Addition of two numbers, and show results in screen                   \n");
    printf("  3: Subtraction of two numbers, and show results in screen                \n");
    printf("  4: Multiplication of two numbers, and show results in screen             \n");
    printf("  5: Division of two numbers, and show results in screen                   \n");
    printf("  6: Compare two numbers, and show results in screen                       \n");
    printf("  7: A Bubble sort method, can make an unorder array to an Ordered  array  \n");
    printf("  8: Author details                                                        \n");
    printf("  9: Show help details                                                     \n");
    printf("  0: Exit Program!                                                         \n");
    printf("***************************************************************************\n");
}

/****************************************************************
Function Name: contactMe
Description: this method is used for show author details.
Input: 
Output: 
Others: 
****************************************************************/
void contactMe()
{
    printf("************************************************\n");
    printf("                 Contact Me                     \n");
    printf("************************************************\n\n");
    printf("  Author Name: xxxxxx                           \n\n");
    printf("  E-mail: xxxxxxxxxxxxxxxxxxxxxxx               \n\n");
    printf("************************************************\n\n");
}

/****************************************************************
Function Name: quit
Description: this method is used for exit program.
Input: 
Output: 
Others: 
****************************************************************/
void quit()
{
    exit(0);
}

/****************************************************************
Function Name: hello
Description: this method is used for say "Hello World!".
Input: 
Output: 
Others: 
****************************************************************/
void hello()
{
    printf("Hello World!\n");
}

/****************************************************************
Function Name: compare
Description: this method is used for compare two numbers and show results.
Input: 
Output: 
Others: 
****************************************************************/
void compare()
{
    double num1,num2,bigger,smaller;
    printf("*****************Compare******************\n");
    printf("please input first number:");
    scanf("%lf",&num1);
    printf("please input second number:");
    scanf("%lf",&num2);
    if(num1 > num2)
    {
        bigger = num1;
        smaller = num2;
    }
    else
    {
        bigger = num2;
        smaller = num1;
    }
    printf("%lf is bigger than %f\n",bigger,smaller);
}

/****************************************************************
Function Name: add
Description: this method is used for add two numbers and show results.
Input: 
Output: 
Others: 
****************************************************************/
void add()
{
    double num1,num2,add;
    printf("***************Calculate - Add***************\n");
    printf("please input first number:");
    scanf("%lf",&num1);
    printf("please input second number:");
    scanf("%lf",&num2);
    add = num1 + num2;
    printf("%lf + %lf = %lf \n",num1, num2, add);
}

/****************************************************************
Function Name: sub
Description: this method is used for sub two numbers and show results.
Input: 
Output: 
Others: 
****************************************************************/
void sub()
{
    double num1,num2,sub;
    printf("***************Calculate - subtract***************\n");
    printf("please input first number:");
    scanf("%lf",&num1);
    printf("please input second number:");
    scanf("%lf",&num2);
    sub = num1 - num2;
    printf("%lf - %lf = %lf\n",num1, num2, sub);
}

/****************************************************************
Function Name: multi
Description: this method is used for multiply two numbers and show results.
Input: 
Output: 
Others: 
****************************************************************/
void multi()
{
    double num1,num2,multi;
    printf("***************Calculate - multiply***************\n");
    printf("please input first number:");
    scanf("%lf",&num1);
    printf("please input second number:");
    scanf("%lf",&num2);
    multi = num1 * num2;
    printf("%lf * %lf = %lf\n",num1, num2, multi);
}

/****************************************************************
Function Name: divi
Description: this method is used for divide two numbers and show results.
Input: 
Output: 
Others: 
****************************************************************/
void divi()
{
    double num1,num2,div;
    printf("***************Calculate - divide***************\n");
    printf("please input first number:");
    scanf("%lf",&num1);
    printf("please input second number:");
    scanf("%lf",&num2);
    if (num2 == 0)
    {
        printf("Error:divisor can not be zero!\n");
    }
    else
    {
        div = num1 / num2;
        printf("%lf / %lf = %lf\n",num1, num2, div);
    }
}
