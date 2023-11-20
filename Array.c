#include <stdio.h>
#include <stdint.h>
//#include <stdio_ext.h>
#include<stdlib.h>

void vbubbleSortAsc(int32_t *i32A, int8_t n) 
{
    int32_t i32T;
    for (int i = 0; i < n-1; i++)
	{
        for (int j = 0; j < n-1-i; j++) 
		{
            if (i32A[j] > i32A[j + 1]) 
			{
                i32T = i32A[j];
                i32A[j] = i32A[j + 1];
                i32A[j + 1] = i32T;
            }
        }
    }
}

void vbubbleSortDesc(int32_t *i32A, int8_t n) 
{
    int32_t i32T;
    for (int i = 0; i < n-1; i++)
	{
        for (int j = 0; j < n-1-i; j++) 
		{
            if (i32A[j] < i32A[j + 1])
			{
                i32T = i32A[j];
                i32A[j] = i32A[j + 1];
                i32A[j + 1] = i32T;
            }
        }
    }
}

int32_t i32Sumofodds(int32_t *i32A, int8_t n) 
{
    int32_t i32s = 0;
    for (int i = 0; i < n; i++)
	{
        if (i32A[i] % 2 != 0) 
		{
            i32s = i32s + i32A[i];
        }
    }
    return i32s;
}

int32_t i32Sumofeven(int32_t *i32A, int8_t n)
 {
    int32_t i32s = 0;
    for (int i = 0; i < n; i++) 
	{
        if (i32A[i] % 2 == 0) 
		{
            i32s = i32s + i32A[i];
        }
    }
    return i32s;
}

void vconvertArrayBits(int32_t *arr, int8_t n)
 {
    int32_t i, j, bit;
    for (j = 0; j < n; j++) 
	{
        for (i = 31; i >= 0; i--)
			{
            bit = (arr[j] >> i) & 1;

            if (i % 2 == 1) {
                bit = 1;
            }
			else 
			{
                bit = 0;
            }

            printf("%d", bit);

            if (i % 8 == 0) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

/*
void vsetbits(int32_t *i32A, int32_t n) {
    int32_t i;
    for (i = 0; i < n; i++) {
        if (i32A[i] % 2 == 0) {
            i32A[i] = 0; // Clear the even bit
        } else {
            i32A[i] = 1; // Set the odd bit
        }
    }
}
*/

int main() 
{
    int32_t i32A[10], oddsum, evensum;

    /* Accept values from the user */

    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) 
	{
      //  __fpurge(stdin);
        while(scanf("%d", &i32A[i])!=1)
        {
            printf("Invalid input");
            exit (0);
        }
    }

    /* Sort the array in ascending order */

    vbubbleSortAsc(i32A, 10);
    printf("Array sorted in ascending order: \n");
    for (int i = 0; i < 10; i++)
		{
        printf("%d ", i32A[i]);
    }

    /* Sort the array in descending order */

    vbubbleSortDesc(i32A, 10);
    printf("\nArray sorted in descending order: \n");
    for (int i = 0; i < 10; i++) 
	{
        printf("%d ", i32A[i]);
    }

    /* sum of all odd value sorted in Array */

    oddsum = i32Sumofodds(i32A, 10);
    printf("\nsum of odd values arr: %d", oddsum);

    /* sum of all even value sorted in Array */

    evensum = i32Sumofeven(i32A, 10);

    printf("\nsum of even values arr: %d", evensum);

    /*Set bit of odd position and clear bit of even position element*/

    /*
    vsetbits(i32A, 10);
    printf("\n set and clear bit are :");
    for (int i = 0; i < 10; i++) {
        printf("\t%d", i32A[i]);
    }
    */

    printf("\nModified binary representations of the array:\n");
    vconvertArrayBits(i32A, 10);

    return 0;
}

/* 
OUTPUT :
Enter 10 integer values:
1
2
4
0
9
8
7
6
5
3
Array sorted in ascending order: 
0 1 2 3 4 5 6 7 8 9 
Array sorted in descending order: 
9 8 7 6 5 4 3 2 1 0 
sum of odd values arr: 25
sum of even values arr: 20
Modified binary representations of the array:
10101010 10101010 10101010 10101010 
10101010 10101010 10101010 10101010 
10101010 10101010 10101010 10101010 
10101010 10101010 10101010 10101010 
10101010 10101010 10101010 10101010 
10101010 10101010 10101010 10101010 
10101010 10101010 10101010 10101010 
10101010 10101010 10101010 10101010 
10101010 10101010 10101010 10101010 
10101010 10101010 10101010 10101010 


