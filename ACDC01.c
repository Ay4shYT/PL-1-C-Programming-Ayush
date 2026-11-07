/* 
Program (1) = Write program to make use of basic I/O function using different data types.
Solution 1 = Predefined value
*/

#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    rollnum = 101;
    per = 89.75;
    grade = 'A';

    printf("======= Student Information ======");
    printf("\n Roll number : %d", rollnum);
    printf("\n Percentage : %f", per);
    printf("\n Grade : %c", grade);

    return 0;
}
