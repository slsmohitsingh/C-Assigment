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
void main()
{
        char cs[]={'I','N','D','I','A'};
        int8_t i;
        i=strlen(cs);
        for(i=i-1;i>=0;i--)
        {
                printf("%c ",cs[i]);
               // printf("\n");
	    }
}

/* OUTPUT:
 A I D N I */

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

/*#include<stdio.h>
#include<string.h>
#include<stdint.h>
void main()
{
        char cs[]="India Wale";
        int8_t i,i8count=0;

        for(i=0;cs[i];i++)
        {
                i8count++;
        }
        printf("%d",i8count);
}*/
#include <stdio.h>
#include <stdint.h>
void main()
 {
    char cs[50];
    int8_t i8count = 0,i;
    int8_t i8isWord = 0; 

    printf("Enter a string: ");
    scanf("%[^\n]s", cs);


    for ( i = 0; cs[i] != '\0'; i++) 
    {
        if (cs[i] == ' ' || cs[i] == '\t' || cs[i] == '\n')
        {
    
            if (i8isWord) 
            {
                i8count++;
                i8isWord = 0; 
            }
        } 
        else 
        {
            i8isWord = 1;
        }
    }
    if (i8isWord)
    {
        i8count++;
    }

    printf("Total number of words: %d\n", i8count);
}

/* OUTPUT :
Enter a string: INDIA WON THE WORLDCUP
Total number of words: 4 */


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
void main()
{
        char cs[]="Come on india come on virat @18...";
        int8_t i,i8alpha=0,i8digits=0,i8sp=0,i8count=0;
        for(i=0;cs[i];i++)
        {
                if(cs[i]>=65 && cs[i]<=90 || cs[i]>=97 && cs[i]<=122)
                        i8alpha++;
                else if(cs[i]>=48 && cs[i]<=57)
                        i8digits++;
                else
                        i8sp++;
        }
        i8count=i8alpha+i8digits+i8sp;
        printf("Alphabets %d\n",i8alpha);
        printf("digits %d\n",i8digits);
        printf("special %d\n",i8sp);
        printf("Total %d\n",i8count);
}

/* OUTPUT :
Alphabets 22
digits 2
special 10
Total 34 */


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
void main()
{
        char csrc[30],cdest[30];
        int8_t i;
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

/* OUTPUT :
Enter the String :virat kholi
Source: virat kholi
Destination: virat kholi */






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

void main() 
{
    char cs[100];
    int8_t i, j;
    int8_t count = 0;
    int8_t i8maxcount = 1;
    char i8maxrepeatedchars[100];
    int8_t repetitionFound = 0; 

    printf("Enter the string :");
    scanf("%s", cs);

    for (i = 0; cs[i]; i++)
		{
        count = 1;
        for (j = i + 1; cs[j]; j++)
			{
            if (cs[i] == cs[j])
                count++;
        }

        if (i8maxcount < count) 
		{
            i8maxcount = count;
            i8maxrepeatedchars[0] = cs[i];
            repetitionFound = 1; 
        } 
		else if (i8maxcount == count)
			{
            i8maxrepeatedchars[repetitionFound] = cs[i];
            repetitionFound++;
        }
    }

    if (repetitionFound && i8maxcount > 1)
		{
        printf("Maximum occurrence(s): ");
        for (i = 0; i < repetitionFound; i++) 
		{
            printf("%c ", i8maxrepeatedchars[i]);
        }
        printf("\nCount: %d", i8maxcount);
    } 
	else
		{
        printf("No occurrence found");
    }
}


/*
 OUTPUT :
 Enter the string :aaabbbccc
Maximum occurrence(s): a b c 
Count: 3

Enter the string :virat
No occurrence found
 */



