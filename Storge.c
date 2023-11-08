/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Static and Extern variable.
.
 * ----------------------------------------------------------------------
 */ 
#include <stdio.h>
#include <stdint.h>


int32_t i32globalVar1 = 10;
static int32_t i32globalVar2 = 20;
/*extern int globalVar3;*/

void vfunction1() {
    int32_t i32localVar1 = 30;

    printf("Inside function1:\n");
    printf("globalVar1: %d\n", i32globalVar1); 
    printf("globalVar2: %d\n", i32globalVar2); 
    printf("localVar1: %d\n", i32localVar1);
}

void vfunction2() {
    
    static int32_t i32localVar2 = 40;

    printf("Inside function2:\n");
    printf("globalVar1: %d\n", i32globalVar1); 
    printf("globalVar2: %d\n", i32globalVar2); 
    printf("localVar2: %d\n", i32localVar2);
}

int main() {
    printf("Inside main:\n");
    printf("globalVar1: %d\n", i32globalVar1); 
    printf("globalVar2: %d\n", i32globalVar2); 
    vfunction1();
    vfunction2();

}

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Static and Extern function.
.
 * ----------------------------------------------------------------------
 */ 
#include <stdio.h>

static void vstaticFunction() 
{
    printf("This is a static function.\n");
}


extern void vexternFunction();

int main() 
{
    printf("Inside main:\n");
    vstaticFunction(); 
    vexternFunction(); 

    
}

/* Define the external function in another source file*/
void vexternFunction() 
{
    printf("This is an external function.\n");
}
