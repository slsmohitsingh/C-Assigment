/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Print individual characters of string in reverse order.
.
 * ----------------------------------------------------------------------
 */ 
 
#include<stdio.h>
#include<string.h>
#include<stdint.h>
int main()
{
        char cs[]={'K','u','s','h','a','l'};
        int32_t i;
        i=strlen(cs);
        for(i=i-1;i>=0;i--)
        {
                printf("%c",cs[i]);
                printf("\n");

        }
}

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Count the total number of words in a string.
.
 * ----------------------------------------------------------------------
 */ 

#include<stdio.h>
#include<string.h>
#include<stdint.h>
int main()
{
        char cs[]="kushal panchal";
        int32_t i,i32count=0;

        for(i=0;cs[i];i++)
        {
                i32count++;
        }
        printf("%d",i32count);
}

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Count total number of alphabets, digits and special characters in a string.
.
 * ----------------------------------------------------------------------
 */ 
 
 #include<stdio.h>
#include<string.h>
#include<stdint.h>
int main()
{
        char cs[]="Kushal panchal sir 123...";
        int32_t i,i32alpha=0,i32digits=0,i32sp=0;
        for(i=0;cs[i];i++)
        {
                if(cs[i]>=65 && cs[i]<=90 || cs[i]>=97 && cs[i]<=122)
                        i32alpha++;
                else if(cs[i]>=48 && cs[i]<=57)
                        i32digits++;
                else
                        i32sp++;
        }
        printf("Alphabets %d\n",i32alpha);
        printf("digits %d\n",i32digits);
        printf("special %d\n",i32sp);
}

/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Copy one string to another string.
.
 * ----------------------------------------------------------------------
 */ 
 
 #include<stdio.h>
#include<string.h>
#include<stdint.h>
int main()
{
        char csrc[30],cdest[30];
        int32_t i;
        printf("Enter the String :");
        scanf("%s",csrc);
     /* strcpy(cdest,csrc);*/
        for(i=0;csrc[i];i++)
        {
                cdest[i]=csrc[i];
        }
        cdest[i]='\0';
        printf("Source: %s\n",csrc);
        printf("Destination: %s\n",cdest);
}


/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Find maximum occurring character in a string.
.
 * ----------------------------------------------------------------------
 */ 

#include<stdio.h>
#include<string.h>
#include<stdint.h>
int main()
{
        char cs[100];
        int32_t i,j;
        int32_t count=0;
        int32_t i32maxcount=0;
        char i32maxrepeatedchar;
        printf("Enter the string");
        scanf("%s",cs);
        for(i=0;cs[i];i++)
        {
                count=0;
                for(j=0;cs[j];j++)
                {
                        if(cs[i]==cs[j])
                                count++;
                }
        
        if(i32maxcount<count)
        {
                i32maxcount=count;
        i32maxrepeatedchar=cs[i];
        }
        }
        printf("%d %c",i32maxcount,i32maxrepeatedchar);


 