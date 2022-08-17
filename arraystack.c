#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct StackADT
{
  int *list;
  int tos;
  int capacity;
};
typedef struct StackADT Stack;

/*operation on stack*/
Stack* create(int);
bool push(Stack*,int);
bool pop(Stack*,int*);
bool peep(Stack*,int*);
void display(Stack*);
void destroy(Stack*);

int main(void)
{
	bool res;
	int elem;
	Stack *ps=create(4);
	push(ps,10);
	push(ps,20);
	push(ps,30);
	push(ps,40);
	res=push(ps,50);
	if(res==false)
  	  	printf("Stack may be full");
	display(ps);
	res=pop(ps,&elem);
	if(res==true)
  		printf("popped:%d",elem);
	display(ps);
	res=peep(ps,&elem);
	if(res==true)
		printf("peeped:%d",elem);
	display(ps);
	destroy(ps);
}
/*operation definations on stack*/
Stack* create(int cap)
{
	Stack*pthis=NULL;
	//allocate memory for whole
	pthis=(Stack*)malloc(sizeof(Stack));
if(NULL==pthis)
{
 perror("malloc");
 exit(1);
}
//allocate memory for parts if they are pointers
pthis->list=(int*)malloc(cap*sizeof(int));
//intialize all members
pthis->tos=-1;
pthis->capacity=cap;
return pthis;
}
void destroy(Stack*pthis)
{
 //release the parts
 free(pthis->list);
 //release the whole
 free(pthis);
}
bool push(Stack*pthis,int elem)
{
 //validate for fullness of stack
 if(pthis->tos+1==pthis->capacity)
    return false;
 //increment to s
 pthis->tos=pthis->tos+1;
 //assign elem  into list[tos]
 pthis->list[pthis->tos]=elem;
 return true;
}
void display(Stack*pthis)
{
int i;
printf("Stack is as follows\n");
for(i=pthis->tos;i>=0;i--)
   printf("%d\n",pthis->list[i]);
}
bool pop(Stack*pthis,int*pDel)
{
//validate emptyness of stack
if(-1==pthis->tos)
  return false;
//copy the top elem into pass by reference variable
*pDel=pthis->list[pthis->tos];
//logically delete the top element by decrement
pthis->tos=pthis->tos-1;
return true;
}
bool peep(Stack*pthis,int*pDel)
{
//validate emptyness of stack
if(-1==pthis->tos)
return false;
//copy the top elem into pass by ref variable
*pDel=pthis->list[pthis->tos];
return true;
}

