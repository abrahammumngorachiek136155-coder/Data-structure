#include<stdio.h>
#define MAX 5
int front=-1,rear=-1
int queue [MAX];
void insert();
void delete_elements();
void display();
void main()

     {
         int op;
         do
         {
             printf("\n 1. Insert");
             printf("\n 2. Delete");
             printf("\n 3. Display");
             printf("\n 4. Exit");


              printf("\n  Enter Your Choice : ");
              scanf("%d",&op);

              switch(op)
             {
             case 1:
                insert();
                 break;

             case 2:

                delete _elements();
                break;

             case 3:
                display();

                break;
             case 4:
                printf("\n Exit..");
                break;

                printf("\n Invalid Choice..");
                break;

             }
         }while(op!=4);
         void insert()

         {

          int num;
            printf("\n Enter value to be isnerted : ");
            scanf("%d",&num);
            if(rear==MAX-1)
            {
             printf("\n Overflow");
             return;
            }
            else if(front==-1 && rear==-1)
            {
                front=rear=0;
            }
            else
            {
                rear++;
            }
`            queue[rear]=num;
         }
           void delete_elementd()
           {
               int val;
               if(front==-1 || front>rear)
               {
                   printf("\n underflow");
                   return;
               }
           else
           {

                val=queue[front];
                printf("\n Deleted Value is : %d", val);
                if(front==rear)
            {
             front=rear=-1;
             return;
            }
            front++;
            }

     }
     void display()
     {

     }
