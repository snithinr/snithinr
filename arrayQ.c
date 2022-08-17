#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct QueueADT
{
  float *list;
  int capacity;
  int rear;
  int front;
};
typedef struct QueueADT Queue;
Queue*create(int cap)
{
Queue*pthis;
pthis=(Queue*)malloc(sizeof(Queue));
pthis->list=(float*)malloc(cap*sizeof(float));
pthis->rear=-1;
pthis->front=0;
pthis->capacity=cap;
}
void display(Queue*pthis)
{
int i;
for(i=pthis->front;i<=pthis->rear;i++)
{
printf("%f",pthis->list[i]);
}
}
bool enqueue(Queue*,float);
bool dequeue(Queue*,float*);
int main()
{
Queue*pq=create(5);
int ch;
float elem;
do{
printf("\n 1.enqueue\n 2.dequeue\n 3.display\n");
printf("\n enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("enter element  to be enqueued:");
        scanf("%f",&elem);
        if(enqueue(pq,elem))
          printf("%f enqueued successfully",elem);
        else
          printf("\n Queue overflow");
          break;
case 2:  printf("enter element  to be dequeued:");
         scanf("%f",&elem);
         if(dequeue(pq,&elem))
          printf("\n %f dequeued successfully",elem);
         else
           printf("\n Queue overflow");
           break;
case 3: display(pq);
        break;
}
}while("true");
printf("\n");
return 0;
}
bool enqueue(Queue*pthis,float elem)
{
  if(pthis->rear+1==pthis->capacity)
   return 0;
 pthis->rear=pthis->rear+1;
 pthis->list[pthis->rear]=elem;
 return true;
 }

bool dequeue(Queue*pthis,float*elem)
{
 if(pthis->rear<pthis->front)
   return false;
  pthis->list[pthis->rear]=*elem;  
    pthis->front=pthis->front+1;
    return true;
}    
