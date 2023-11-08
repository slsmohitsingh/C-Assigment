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

int main() {
    int32_t i32num = 5;
    int32_t i32result = SQUARE(i32num);
    printf("The square of %d is %d\n", i32num, i32result);
    
}

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

int main() {
    int32_t i32num1 = 5;
    int32_t i32num2 = 3;
    int32_t i32result = ADD_AND_SQUARE(i32num1, i32num2);

    printf("The result is %d\n", i32result);

}

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
int main()
{
    int32_t i32x = 10;
    int32_t i32y = 5;

#ifdef DEBUG
    printf("Debug mode is enabled.\n");
    printf("x = %d, y = %d\n", i32x, i32y);
#endif

    int32_t i32result = i32x + i32y;

    printf("The result is: %d\n", i32result);

   
}

