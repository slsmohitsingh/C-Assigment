/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Perform the following operation on integer array of 10 elements.
 * ----------------------------------------------------------------------
 */ 

/* Accept the value from user */

#include <stdio.h>
#include <stdint.h>


/* Function to perform bubble sort in ascending order */
int32_t vbubbleSortAsc(int32_t *i32A, int32_t n) {
    int32_t i32T;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (i32A[j] > i32A[j + 1]) {
                i32T = i32A[j];
                i32A[j] = i32A[j + 1];
                i32A[j + 1] = i32T;
            }
        }
    }
}

/* Function to perform bubble sort in descending order*/
int32_t vbubbleSortDesc(int32_t *i32A, int32_t n) {
    int32_t i32T;
    for (int i = 0; i <n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (i32A[j] < i32A[j + 1]) {
                // Swap arr[j] and arr[j+1]
                i32T = i32A[j];
                i32A[j] = i32A[j + 1];
                i32A[j + 1] = i32T;
            }
        }
    }
}
int32_t i32Sumofodds(int32_t *i32A , int32_t n)
{
    int32_t i32s=0,i;
    for(i=0;i<n;i++)
    {
      if(i32A[i]%2!=0)
     {
        i32s=i32s+i32A[i];
     }
    }
    return i32s;
}
int32_t i32Sumofeven(int32_t *i32A,int32_t n)
{
    int32_t i32s=0,i;
    for(i=0;i<n;i++)
    {
      if(i32A[i]%2==0)
     {
        i32s=i32s+i32A[i];
     }
    }
    return i32s;
}
	
void vsetbits(int32_t *i32A,int32_t n)
{
	int32_t i;
	for(i=0;i<n;i++)
	{
		if(i32A[i]%2==0)
		{
			i32A[i]=0;  /* Clear the even bit*/ 
		}else{
			i32A[i]=1; /* set the odd bit */
			
		}
		
	}

}

int main() {
    int32_t i32A[10];

    /* Accept values from the user */
    
    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &i32A[i]);
    }

    /* Sort the array in ascending order */
    
    vbubbleSortAsc(i32A, 10);
    printf("Array sorted in ascending order: \n");
    for (int i = 0; i < 10; i++) {
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
    
    int32_t oddsum = i32Sumofodds(i32A,10);
    printf("\nsum of odd values arr: %d",oddsum);
    
    /* sum of all even value sorted in Array */
    
    int32_t evensum = i32Sumofeven(i32A,10);
    printf("\nsum of even values arr: %d",evensum);
	
    /*Set bit of odd position and clear bit of even position element*/
    
	vsetbits(i32A,10);
	printf("\n set and clear bit are :");
	for (int i = 0; i < 10; i++) 
	{
    printf("\t%d", i32A[i]);
	}
}

