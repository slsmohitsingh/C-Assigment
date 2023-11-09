/*!
 * ----------------------------------------------------------------------
 * Copyright (c) 2019, System Level Solutions (India) Pvt. Ltd.
 * ----------------------------------------------------------------------
 * Purpose: 
 * Package: 
 * File name: Link list
.
 * ----------------------------------------------------------------------
 */ 
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include<string.h>

typedef struct student
{
    int32_t i32roll;
    char cname[50];
    int32_t i32grade;
    struct student *pnext;
}stu_st;
/* Display all element */

void *vDisplayallelement(stu_st *ptr)
{
    if(ptr==NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        while(ptr)
        {
            printf("%d %s %d \n",ptr->i32roll,ptr->cname,ptr->i32grade);
           /* printf("%s \n",ptr->cname);
            printf("%d \n",ptr->i32grade);*/
            ptr=ptr->pnext;
        }
    }
}
 
 /* Add begin */
 
stu_st *addbegin(stu_st *ptr)
{
    stu_st *pnewnode = NULL;
    pnewnode = calloc(1,sizeof(stu_st));
    printf("Enter the roll ,name ,grade\n");
    scanf("%d%s%d",&pnewnode->i32roll,pnewnode->cname,&pnewnode->i32grade);
   /* printf("Enter hte name :");
    scanf("%s",pnewnode->cname);
    printf("Enter the Grade :");
    scanf("%d",&pnewnode->i32grade);*/
    pnewnode->pnext=ptr;
    ptr=pnewnode;
    return ptr;
}

/* Add nth node */

stu_st* addnthnode(stu_st *ptr)
{
        stu_st *pnewnode=NULL,*ptemp=NULL,*prev=NULL;
        int32_t i32n,i32count=0;
        pnewnode=calloc(1,sizeof(stu_st));
        if(pnewnode==NULL)
        {
                printf("newnode is not created");
        }
        else
        {
        printf("enter the number to place node:");
        scanf("%d",&i32n);

        printf("enter the roll number:");
        scanf("%d",&pnewnode->i32roll);
        printf("enter the name:");
        scanf("%s",pnewnode->cname);
        printf("Enter the Grade:");
        scanf("%d",&pnewnode->i32grade);
        if(i32n<0)
        {
                printf("invalid node number");
                return NULL;
        }
        else if(ptr==NULL || i32n==1)
        {
                pnewnode->pnext=ptr;
                   ptr=pnewnode;
            return ptr;
        }

        else

        {
                ptemp=ptr;
                prev=ptemp;
                while(i32n!=1)
                {
                  prev=ptemp;
                   ptemp=ptemp->pnext;
                   i32n--;
                }
                prev->pnext=pnewnode;
                pnewnode->pnext=ptemp;
        }
        }
  return ptr;
}

/*  Delete nth Node */

stu_st* deletenthnode(stu_st *ptr)
{
    stu_st *ptemp=NULL,*prev=NULL;
    int32_t i32count=0,i32var=1,n;
    if(ptr==NULL)
    {
        printf("list is empty...");
    }
    else
    {
        printf("Enter to the nth node deleted :");
        scanf("%d",&n);
        ptemp=ptr;
        while(ptemp!=NULL)
      {
        i32count++;
        ptemp=ptemp->pnext;
      }
      if(n<0 && n>i32count)
      {
          printf("invalid node\n");
      }
      else
      {
          ptemp=ptr;
          while(i32var<n)
          {
              prev=ptemp;
              ptemp=ptemp->pnext;
              i32var++;
          }
          if(ptemp==ptr)
          {
              ptr=ptr->pnext;
              free(ptemp);
          }
          else
          {
              prev->pnext=ptemp->pnext;
              free(ptemp);
          }
          
      }
        
    }
    return ptr;
}

/* Sort the element */
void vsorttheelement(stu_st *ptr)
{
    stu_st *ptemp=NULL,i32var;
    int32_t i,j,i32count=0;
	 ptemp=ptr;
    while(ptemp!=NULL)
    {
       i32count++;
       ptemp=ptemp->pnext;
    }
    for(i=0;i<i32count-1;i++)
    {
        ptemp=ptr->pnext; 
        for(j=0;j<i32count-1-i;j++)
        {
            if(ptr->i32roll > ptemp->i32roll)
            {
               i32var.i32roll = ptr->i32roll;
               ptr->i32roll=ptemp->i32roll;
               ptemp->i32roll=i32var.i32roll;
               
               strcpy(i32var.cname , ptr->cname);
               strcpy(ptr->cname , ptemp->cname);
               strcpy(ptemp->cname , i32var.cname);
               
               i32var.i32grade = ptr->i32grade;
               ptr->i32grade=ptemp->i32grade;
               ptemp->i32grade=i32var.i32grade;
               
            }
            ptemp=ptemp->pnext;
        }
        ptr=ptr->pnext;
    }
    
}
int  main()
{
    int32_t i32op;  
    stu_st *phead = NULL;
    while(1)
    {
        printf("Enter the choice....\n");
        printf("1.Display all element 2.Add beging the element 3.add the nth element 4.delete the nth element 5.sort the element 9.exit\n");
        scanf("%d",&i32op);
        switch(i32op)
        {
            case 1: vDisplayallelement(phead);
            break;
            case 2: phead = addbegin(phead);
            break;
            case 3: phead = addnthnode(phead);
            break;
            case 4: phead = deletenthnode(phead);
            break;
            case 5: vsorttheelement(phead);
            break;
            case 9:exit(0);
        }
    }
}

