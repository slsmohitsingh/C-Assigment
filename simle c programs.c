/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Write a c program to print fibonacci series without using recursion.
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>
void main()
{
    int32_t i32n;
	int8_t i8a=0,i8b=1,i8s=0
    printf("Enter the number:");
    scanf("%d",&i32n);
    printf("%d %d",i8a,i8b);
    while(i32n!=2)
    {
        i8s = i8a + i8b;
        i8a = i8b;
        i8b = i8s;
        printf("  %d",i32s);
        i32n--;
    }
}
/* OUTPUT 
Enter the number:10
0 1  1  2  3  5  8  13  21  34
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Write a c program to print fibonacci series using recursion.
.
 * ----------------------------------------------------------------------
 */
 
#include<stdio.h>
#include<stdint.h>
int32_t fib(int32_t);

int main()
{    
    int32_t i,i32n;

    printf("Enter the input: ");
    scanf("%d", &i32n);       

    for(i = 0; i < i32n; i++)
    {
        printf("%d ", fib(i));
        
    }
}

int fib(int32_t i32num)
{    

    if(i32num == 0 || i32num == 1)
    {
        return i32num;
    }
    else
    {
        return (fib(i32num-1) + fib(i32num-2));
    }
}
/* OUTPUT 
Enter the number:10
0 1  1  2  3  5  8  13  21  34
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Write a c program to check prime number.
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>
#include<math.h>
void main()
{
    int32_t i, i32n,i32count=0;
    printf("Enter the number :");
    scanf("%d",&i32n);
    if(i32n<=1)
    {
        printf("%d is not prime number",i32n);
    }
    for(i=2; i <= sqrt(i32n); i++)
    {
        if(i32n % i == 0)
        {
           i32count++;
           break;
            
        }
    }
    if(i32count == 0)
    {
        printf("%d is a prime number",i32n);
    }
    else
    {
         printf("%d is not a prime number",i32n);
    }
}
/*
output 
Enter the number :5
5 is a prime number
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Write a c program to check palindrome or not.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>

void main()
{
    int32_t i32n,i32temp,i32rem,i32sum=0;
    printf("Enter the number :");
    scanf("%d",&i32n);
    i32temp=i32n;
    while(i32temp)
    {
        i32rem=i32temp%10;
        i32sum=i32sum * 10 + i32rem;
        i32temp/=10;
    }
    if(i32n==i32sum)
    {
        printf("IT'S A PALINDROME");
    }
    else
    {
        printf("IT'S NOT A PALINDROME");
    }
}
/*
output 
Enter the number :1221
IT'S A PALINDROME
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Write a c program to print factorial.
 * ----------------------------------------------------------------------
 */
 
#include<stdio.h>
#include<stdint.h>

int main()
{
    int32_t i32n;
	int8_t i8fact=1;
    printf("Enter the number:");
    scanf("%d",&i32n);
    while(i32n)
    {
        i8fact = i8fact * i32n;
        i32n--;
    }
    
    printf("%d",i8fact);
} 
/*
output
Enter the number:5
120
*/


/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Write a c program to print sum of digit.
 * ----------------------------------------------------------------------
 */

#include<stdio.h>
#include<stdint.h>
int main()
{
    int32_t i32n;
	int8_t i8temp,i8sum;
    printf("Enter the number: ");
    scanf("%d",&i32n);
    
    while(i32n)
    {
        i8temp = i32n % 10;
        i8sum = i8sum + i8temp;
        i32n/=10;
    }
    printf("sum of digis is : %d",i8sum);
}
/* output
Enter the number: 512
sum of digis is : 8
*/
/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Write a c program to reverse given number.
 * ----------------------------------------------------------------------
 */
 
#include<stdio.h>
#include<stdint.h>
int main()
{
    int32_t i32n,i32sum=0;
	int8_t i8temp;
    printf("Enter the number: ");
    scanf("%d",&i32n);
    
    while(i32n)
    {
        i8temp = i32n % 10;
        i32sum = i32sum * 10 + i8temp;
        i32n/=10;
    }
    printf("Reverse number is : %d",i32sum);
}
/* output
Enter the number: 512
Reverse number is : 215 */

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Write a c program to swap two numbers without using third variable.
 * ----------------------------------------------------------------------
 */
 
#include<stdio.h>
#include<stdint.h>
int main()
{
    int8_t i8a = 10 , i8b = 20;
    
    i8a = i8a * i8b;
    i8b = i8a / i8b;
    i8a = i8a / i8b;
	printf("After swapping\n");
    
    printf("i8a = %d i8b = %d",i8a,i8b);
}
/* outputAfter swapping
i8a = 20 i8b = 10
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:Write a c program to convert decimal number to binary.
 * ----------------------------------------------------------------------
 */
 
#include <stdio.h>
#include <stdint.h>

/* Function to convert decimal to binary*/
void vdecimalToBinary(int32_t n)
{
    int32_t binary[32];

    int i = 0;
    if (n == 0)
    {
        printf("Binary equivalent: 0\n");
        return;
    }
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() 
{
    int32_t num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    vdecimalToBinary(num);
}
/* 
outputEnter a decimal number: 7
Binary equivalent: 111
*/



/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Write a c program to print number traingle.
 * ----------------------------------------------------------------------
 */
 
#include<stdio.h>
#include<stdint.h>

int main()
{
    int8_t i,j,i8n,s;
    printf("Enter the number :");
    scanf("%d",&i8n);
    for(i=1;i<=i8n;i++)
    {
        for(s=1;s<=i8n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
/*
outputEnter the number :5
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Write a c program to generate fibonacci traingle.
 * ----------------------------------------------------------------------
 */
 
#include<stdio.h>    
#include<stdint.h>  
int main()
{  
   int32_t i32a=0,i32b=1,i,i32c,i32n,j;    
    printf("Enter the number:");    
    scanf("%d",&i32n);    
    for(i=1;i<=i32n;i++)    
    {    
        i32a=0;    
        i32b=1;    
        printf("%d\t",i32b);    
        for(j=1;j<i;j++)    
        {    
            i32c=i32a+i32b;    
            printf("%d\t",i32c);    
            i32a=i32b;    
            i32b=i32c;    
    
        }    
        printf("\n");    
    }    
}  
/* outputEnter the number:5
1
1       1
1       1       2
1       1       2       3
1       1       2       3       5
*/
 
 
 
 /*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Write a c program to convert number into characters.
 * ----------------------------------------------------------------------
 */

#include<stdio.h>
#include<stdint.h>

int main()
{
    int32_t i32n;
    printf("Enter the number :");
    scanf("%d",&i32n);
    if(i32n >= 0 && i32n <= 127)
    {
        printf("%c",i32n);
    }
    else
    {
        printf("%d is invalid input",i32n);
    }
}
/*output
Enter the number :65
A
*/


