//
//  main.c
//  QueueimplementationthroughArray
//
//  Created by umut can genlik on 
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include<ctype.h>
# define MAXSIZE 200

int q[MAXSIZE];
int front, rear;

void main()
{
    void add(int);
    int del();
    int will=1,i,num;
    front =0;
    rear = 0;
    
    clrscr();
    
    printf("Program for queue demonstration through array ");
           
           while(will ==1)
    {
        printf("MAIN MENU:  1.Add element to queue 2.Delete element from the queue ");
        scanf("%d",&will);
               
               switch(will)
        {
            case 1:
                printf(" Enter the data... ");
                       scanf("%d",&num);
                       add(num);
                       break;
                       case 2: i=del();
                       printf("Value returned from delete function is  %d ",i);
                              break;
                              default: printf("Invalid Choice ... ");
                              }
                              
               printf(" Do you want to do more operations on Queue ( 1 for yes, any other key to exit) ");
                                     scanf("%d" , &will);
                                     } //end of  outer while
                                     }               //end of main
                                     
                                     void add(int a)
                {
                    
                    if(rear>MAXSIZE)
                    {
                        printf(" QUEUE FULL ");
                               return;
                               }
                               else
                               {
                                   q[rear]=a;
                                   rear++;
                                   printf(" Value of rear = %d and the value of front is %d",rear,front);
                                          }
                                          }
                                          
                                          int del()
                                   {
                                       int a;
                                       if(front == rear)
                                       {
                                           printf(" QUEUE EMPTY ");
                                                  return(0);
                                                  }
                                                  else
                                                  {
                                                      a=q[front];
                                                      front++;
                                                  }
                                                  return(a);
                                                  }


