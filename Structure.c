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
    int8_t i8age;
};
void main()
{
    struct person v_st;
    struct person *pptr;
    pptr=&v_st;
    printf("Enter the name :");
    scanf("%s",pptr->cname);
    printf("Enter the age :");
    scanf("%d",&pptr->i8age);
    
    printf(" person Details are under the below:\n");
    printf("%s %d",pptr->cname,pptr->i8age);
}
/*
OUTPUT :
Enter the name :kohli
Enter the age :35
person Details are under the below:
kohli 35
*/


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

typedef struct 
{
    int32_t i32data;
    int32_t *pptr;
} MyStruct_st;

void main() {
    MyStruct_st myData;
    int32_t value = 42;

    /* Assign values to the structure members */
    myData.i32data = 10;
    myData.pptr = &value;

    /* Access and modify data through the structure pointer */
    printf("Data: %d\n", myData.i32data);
    printf("Value pointer: %d\n", *(myData.pptr));
}
/*
OUTPUT :
Data: 10
Value pointer: 42
*/

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
 
void main()
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
/*
OUTPUT :
30 40
*/

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
#include <stdint.h> 
struct student  
{  
   int32_t i32a;  
   char cb;  
   float f32c;  
};  
void main()  
{  
   struct student stu_st; /* variable declaration of the student type */  
   /* Displaying the size of the structure student */
   printf("The size of the student structure is %ld", sizeof(stu_st));  
} 
/*
OUTPUT :
The size of the student structure is 12
*/ 

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
 
void main()
{
    struct student stu_st;
    struct studentone one_st;
    printf("size of student %ld ",sizeof(stu_st));
    printf("\nsize of studentone %ld",sizeof(one_st));
}
/*
OUTPUT :
size of student 12 
size of studentone 8
*/

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
//#include<stdio_ext.h>
#include<stdlib.h>
struct student
{    
 int32_t i32rollno;    
 char cname[10];    
};    
void main()
{    
int32_t i;    
struct student st[5];    
printf("Enter Records of 5 students");    
for(i=0;i<5;i++)
{    
printf("\nEnter Name:");    
scanf("%s",st[i].cname);  
printf("Enter Rollno:");
while(scanf("%d",&st[i].i32rollno)!=1)
{
    exit (0);
}
/*__fpurge(stdin);
scanf("%d",&st[i].i32rollno); */   
}    
printf("\nStudent Information List:");    
for(i=0;i<5;i++)
{    
printf("\nRollno:%d, Name:%s",st[i].i32rollno,st[i].cname);    
}    
}
/*
OUTPUT :
Enter Records of 5 students
Enter Name:KOHLI
Enter Rollno:35

Enter Name:ROHIT
Enter Rollno:36

Enter Name:RAHUL
Enter Rollno:29

Enter Name:GILL
Enter Rollno:23

Enter Name:PANDYA
Enter Rollno:30

Student Information List:
Rollno:35, Name:KOHLI
Rollno:36, Name:ROHIT
Rollno:29, Name:RAHUL
Rollno:23, Name:GILL
Rollno:30, Name:PANDYA
*/  

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:  Without typedef.
.
.
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>
struct student
{
    char cname[20];
    int32_t i32roll;
};
void main()
{
    struct student v_st={"Mohit",880};
    printf("%s %d",v_st.cname,v_st.i32roll);
}
/*
OUTPUT :
Mohit 880
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:  With typedef.
.
.
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<stdint.h>
typedef struct student
{
    char cname[20];
    int32_t i32roll;
}stu_st;
void main()
{
    stu_st v_st={"Mohit",880};
    printf("%s %d",v_st.cname,v_st.i32roll);
}
/*
OUTPUT :
Mohit 880
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:  Add the functionality of dynamic memory allocation to create a structure array.
.
.
.
 * ----------------------------------------------------------------------
 */ 
/*
OUTPUT :
Enter the number of persons: 3
Enter name for person: KOHLI
Enter age for person:  35
Enter name for person: ROHIT
Enter age for person:  36
Enter name for person: GILL
Enter age for person:  23

Details of persons:
Name: KOHLI
Age: 35

Name: ROHIT
Age: 36

Name: GILL
Age: 23
*/

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name:  Demonstrating the concept of call by value and call by reference (pass a structure to the
function, perform the operation on it (structure member) and print values in the main function)
.
.
.
 * ----------------------------------------------------------------------
 */ 
 
/*
OUTPUT :
Initial values: x = 1, y = 2
After call by value: x = 1, y = 2
After call by reference: x = 30, y = 40
*/