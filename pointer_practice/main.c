#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello worldddddddddddd!\n");

    printf("========= It's ""swap two numbers"" using pointer and functions without return ========= " );

    int a=3, b=5 ;
    void swapA_B (int *, int *);

    printf("Please enter two numbers that you wanna swap \n");
    //cout >> ""
    //cin <<
    //scanf ("%d %d ", &a, &b );
    printf("Before swap, a = %3d  b =%3d  \n", a, b);
    swapA_B (&a , &b);
    printf("In Main, now a = %2d  b = %2d \n", a, b);

    return 0;
}


void swapA_B(int* a, int* b){
    int temp;

    printf("now it's in swapA_B function processing, now , a = %2d  b =%2d  \n", *a, *b);
    temp = *a ;
    *a = *b ;
    *b = temp ;
    printf("In swapA_B function. After swap, a = %2d  b = %2d  \n", *a, *b);
}


