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
 int main() {  
 int32_t i32arr[5] = {10, 20, 30, 40, 50}; 
 ;
for(int i=0; i<5; i++) 
{  
printf("i32arr[%d] = %d\n", i, *(i32arr+i));
printf("i32arr[%d] = %ld\n", i, i32arr+i); 
}  
}  
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

int main()
{
    int32_t i32arr[3][4] = {
              {11,22,33,44},
              {55,66,77,88},
              {11,66,77,44}
};
int32_t i, j;

    for(i = 0; i < 3; i++)
    {
        printf("Address of %d th array %u \n",i , *(i32arr + i));
        for(j = 0; j < 4; j++)
        {
             printf("arr[%d][%d]=%d\n", i, j, *( *(i32arr + i) + j) );
        }
        printf("\n");
    }

}

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
int32_t *i32createArray(int32_t size) 
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
    int32_t size = 5;
    int* pArray = i32createArray(size); /* Call the function to create an array */

    printf("Array elements: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", pArray[i]);
    }
}

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

int32_t i32add(int32_t a, int32_t b) {
    return a + b;
}

int32_t i32sub(int32_t a, int32_t b) {
    return a - b;
}

int main() {
    int (*sls)(int32_t, int32_t); /* Declare a function pointer */

    sls = i32add; /* Point the function pointer to the add function*/
    printf("Addition result: %d\n", sls(5, 3));

    sls = i32sub; /* Point the function pointer to the subtract function*/
    printf("Subtraction result: %d\n", sls(5, 3));

}

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
    int32_t i32var1=10;
    int32_t i32var2=20;
    int32_t i32var3=30;
    int32_t *ptr[3]={&i32var1,&i32var2,&i32var3};
    for(int i=0;i<3;i++)
    {
        printf("var[%d]=%d\n",i,*ptr[i]);
    }
    
}

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
   int32_t i32a=10;
   int32_t *p;
   int32_t **pp;
   p=&i32a;
   pp=&p;
   printf("%d %p %p\n",i32a,p,pp);
   printf("%d %d %p\n",i32a,*p,*pp);
   printf("%d %d %d\n",i32a,*p,**pp);
}