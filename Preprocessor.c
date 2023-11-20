/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Parameterized Macros.
.
 * ----------------------------------------------------------------------
 */ 
 
#include <stdio.h>
#include <stdint.h>
#define SQUARE(x) ((x) * (x))

void main() {
    int8_t i8num = 5;
    int8_t i8result = SQUARE(i32num);
    printf("The square of %d is %d\n", i8num, i8result);
    
}
/*
OUTPUT:
The square of 5 is 25
*/


/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Nesting in Macros.
.
 * ----------------------------------------------------------------------
 */ 
#include <stdio.h>
#include<stdint.h>

#define ADD(x, y) ((x) + (y))
#define SQUARE(x) ((x) * (x))

#define ADD_AND_SQUARE(a, b) SQUARE(ADD(a, b))

void main() {
    int8_t i8num1 = 5;
    int8_t i8num2 = 3;
    int8_t i8result = ADD_AND_SQUARE(i8num1, i8num2);

    printf("The result is %d\n", i8result);
}
/*
OUTPUT:
The result is 64
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Conditional Compilation.
.
 * ----------------------------------------------------------------------
 */ 
 
#include <stdio.h>
#include <stdint.h>
#define DEBUG
void main()
{
    int8_t i8x = 10;
    int8_t i8y = 5;

#ifdef DEBUG
    printf("Debug mode is enabled.\n");
    printf("x = %d, y = %d\n", i8x, i8y);
#endif

    int32_t i8result = i8x + i8y;

    printf("The result is: %d\n", i8result);
}
/*
OUTPUT:
Debug mode is enabled.
x = 10, y = 5
The result is: 15
*/

