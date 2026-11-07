/* Program (8) : write a program to swap twonumbers using a termporary variable
Solution 2 : User defined values
*/

# include<stdio.h>
int main()

{
    int a, b, temp;
    printf("\n Enter First Number:");
    scanf("%d", &a);
    printf("\n Enter Second Number:");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;
    
    printf("\n After Swapping:");
    printf("\n First Number  = %d\n", a);
    printf("\n Second Number  = %d\n", b);
    return 0;
}
