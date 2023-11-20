/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Pointers and 1D arrray
.
 * ----------------------------------------------------------------------
 */ 
 
#include <stdio.h>
#include <stdint.h>
 void main()
{  
    int8_t i8arr[5] = {10, 20, 30, 40, 50}; 
 
    for(int i=0; i<5; i++) 
  {  
   printf("i32arr[%d] = %d\n", i, *(i32arr+i));
   printf("i32arr[%d] = %ld\n", i, i32arr+i); 
  }  
}

/* 
OUTPUT :
i32arr[0] = 10
i32arr[0] = 140734268994384
i32arr[1] = 20
i32arr[1] = 140734268994388
i32arr[2] = 30
i32arr[2] = 140734268994392
i32arr[3] = 40
i32arr[3] = 140734268994396
i32arr[4] = 50
i32arr[4] = 140734268994400
*/
  
/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Pointers and 2D Array
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>

void main()
{
    int32_t i32arr[3][4] = 
	{
              {11,22,33,44},
              {55,66,77,88},
              {11,66,77,44}
    };
int8_t i, j;

    for(i = 0; i < 3; i++)
    {
        printf("Address of %d th array %u \n",i , i32arr + i);
        for(j = 0; j < 4; j++)
        {
             printf("arr[%d][%d]=%d\n", i, j, *( *(i32arr + i) + j) );
			 printf("arr[%d][%d]=%d\n", i, j,i32arr[i][j]);
			 
        }
        printf("\n");
    }

}

}
/* 
OUTPUT
Address of 0 th array 1454595088 
arr[0][0]=11
arr[0][1]=22
arr[0][2]=33
arr[0][3]=44

Address of 1 th array 1454595104 
arr[1][0]=55
arr[1][1]=66
arr[1][2]=77
arr[1][3]=88

Address of 2 th array 1454595120 
arr[2][0]=11
arr[2][1]=66
arr[2][2]=77
arr[2][3]=44
*/

*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Function Returning a pointer.
.
 * ----------------------------------------------------------------------
 */ 
 
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
int32_t *i32createArray(int8_t size) 
{
    int32_t* parr = (int32_t*)malloc(size * sizeof(int32_t)); /*Dynamically allocate an array*/
    for (int i = 0; i < size; i++) 
    {
        parr[i] = i * 2; 
    }
        return parr;
    
}

int main()
{
    int8_t size = 5;
    int32_t *pArray = i32createArray(size); /* Call the function to create an array */

    printf("Array elements: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", pArray[i]);
    }
}

/* 
OUTPUT :
Array elements: 0 2 4 6 8 
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Function Pointers
.
 * ----------------------------------------------------------------------
 */ 
 
#include <stdio.h>
#include <stdint.h>

int32_t i32add(int8_t a, int8_t b,int8_t c) 
{
    return a + b + c;
}

int32_t i32sub(int8_t a, int8_t b) 
{
    return a - b;
}

int main() 
{
    int (*sls)(int8_t, int8_t); /* Declare a function pointer */

    sls = i32add; /* Point the function pointer to the add function*/
    printf("Addition result: %d\n", sls(5, 3, 2));

    sls = i32sub; /* Point the function pointer to the subtract function*/
    printf("Subtraction result: %d\n", sls(5, 3));
}
/* 
OUTPUT :
Addition result: 8
Subtraction result: 2
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Array of Pointers(Pointer Array)
.
 * ----------------------------------------------------------------------
 */ 
#include<stdio.h>
#include<stdint.h>

int main()
{
    int8_t i32var1=10;
    int8_t i32var2=20;
    int8_t i32var3=30;
    int8_t *ptr[3]={&i32var1,&i32var2,&i32var3};
    for(int i=0;i<3;i++)
    {
        printf("var[%d]=%d\n",i,*ptr[i]);
    }
    
}
/*
OUTPUT :
var[0]=10
var[1]=20
var[2]=30
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Pointer to an Array
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>
int main()
{
    int32_t i32arr[] = { 3, 5, 6, 7, 9 };
    int *p = i32arr;
    int (*ptr)[5] = &i32arr;
    
    printf("p = %p, ptr = %p\n", p, ptr);
    printf("*p = %d, *ptr = %p\n", *p, *ptr);
    
    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n", sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",sizeof(ptr), sizeof(*ptr));
}
/*
OUTPUT :
p = 0x7ffde4b19bb0, ptr = 0x7ffde4b19bb0
*p = 3, *ptr = 0x7ffde4b19bb0
sizeof(p) = 8, sizeof(*p) = 4
sizeof(ptr) = 8, sizeof(*ptr) = 20
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:pointer to pointer.
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>
int main()
{
   int8_t i8a=10;
   int8_t *p;
   int8_t **pp;
   p=&i8a;
   pp=&p;
   printf("%d %p %p\n",i8a,p,pp);
   printf("%d %d %p\n",i8a,*p,*pp);
   printf("%d %d %d\n",i8a,*p,**pp);
}
/*
OUTPUT :
10 0x7ffe342815f7 0x7ffe342815f8
10 10 0x7ffe342815f7
10 10 10
*/