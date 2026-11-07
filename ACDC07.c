/* Program (7) : write a program to swap twonumbers using a termporary variable
Solution 1 : Pre defined values
*/

# include<stdio.h>
int main()

{
    int a, b, temp;
    a = 111;
    b = 222;
    printf("\n Before swapping:");
    printf("\n a = %d b = %d \n", a, b);

    temp = a;
    a = b;
    b = temp;
    
    printf("\n After Swapping:");
    printf("\n a = %d, b = %d \n", a, b);
    return 0;
}
