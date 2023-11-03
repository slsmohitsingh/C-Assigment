/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Pointers to Structures.
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>
struct person
{
    char cname[50];
    int32_t i32age;
};
int main()
{
    struct person v_st;
    struct person *pptr;
    pptr=&v_st;
    printf("Enter the name :");
    scanf("%s",pptr->cname);
    printf("Enter the age :");
    scanf("%d",pptr->i32age);
    
    printf(" person Details are under the below:\n");
    printf("%s %d",pptr->cname,pptr->i32age);
}

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Pointers within Structures.
.
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>

typedef struct {
    int32_t i32data;
    int32_t *pptr;
} MyStruct_st;

int main() {
    MyStruct_st myData;
    int32_t value = 42;

    /* Assign values to the structure members */
    myData.i32data = 10;
    myData.pptr = &value;

    /* Access and modify data through the structure pointer */
    printf("Data: %d\n", myData.i32data);
    printf("Value pointer: %d\n", *(myData.pptr));
}

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Self Referential Structures.
.
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>
struct node {
    int32_t i32data;
    char cdata;
    struct node* pptr;
};
 
int main()
{
    struct node ob1; /* Node1 */
 
    /* Initialization */
    ob1.pptr = NULL;
    ob1.i32data = 10;
    ob1.cdata = 20;
 
    struct node ob2; /* Node2 */
 
    /* Initialization */
    ob2.pptr = NULL;
    ob2.i32data = 30;
    ob2.cdata = 40;
 
    /* Linking ob1 and ob2 */
    ob1.pptr = &ob2;
 
    /* Accessing data members of  ob2 using ob1 */
    printf("%d ", ob1.pptr->i32data);
    printf("%d", ob1.pptr->cdata);
}

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Structure Padding
.
.
 * ----------------------------------------------------------------------
 */ 
 
 #include <stdio.h>  
struct student  
{  
   int32_t i32a;  
   char cb;  
   float_t f32c;  
};  
int main()  
{  
   struct student stu_st; /* variable declaration of the student type */  
   /* Displaying the size of the structure student */
   printf("The size of the student structure is %ld", sizeof(stu_st));  
}  

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Structure alignment.
.
.
 * ----------------------------------------------------------------------
 */ 
 
#include <stdio.h>
#include<stdint.h>
struct student  
{
    int16_t i16s;
    int32_t i32s;
    char cp;
};
 

struct studentone
{
    int32_t i32;
    char cp;
    int16_t i16s;
};
 
int main()
{
    struct student stu_st;
    struct studentone one_st;
    printf("size of student %ld ",sizeof(stu_st));
    printf("\nsize of studentone %ld",sizeof(one_st));
}

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:  Array of Structure.
.
.
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>  
#include<string.h> 
#include<stdint.h>
struct student{    
int32_t i32rollno;    
char cname[10];    
};    
int main(){    
int32_t i;    
struct student st[5];    
printf("Enter Records of 5 students");    
for(i=0;i<5;i++){    
printf("\nEnter Rollno:");    
scanf("%d",&st[i].i32rollno);    
printf("\nEnter Name:");    
scanf("%s",st[i].cname);    
}    
printf("\nStudent Information List:");    
for(i=0;i<5;i++){    
printf("\nRollno:%d, Name:%s",st[i].i32rollno,st[i].cname);    
}    
     
}  

