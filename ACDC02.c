/* 
Program (2) = Write program to make use of basic I/O function using different data types.
Solution 2 = User defined value
*/

#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\n Enter Student Roll Number:");
    scanf("%d", &rollnum);
    printf("\n Enter Student Percentage:");
    scanf("%f", &per);
    printf("\n Enter Student Grade:");
    scanf(" %c", &grade);

    printf("\n ======= Student Information ======");
    printf("\n Roll number : %d", rollnum);
    printf("\n Percentage : %f", per);
    printf("\n Grade : %c", grade);

    return 0;
}
