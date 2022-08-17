#include<stdio.h>
#include<stdlib.h>
void readlist(int list[],int size)
{
     int i;
     printf("Enter %d elements:",size);
     for(i=0;i<size;i++)
     scanf("%d",&list[i]);
     return;
}
void printlist(int list[],int size)
{
  int i;
  for(i=0;i<size;i++)
    printf("%d",list[i]);
 printf("\n");
 return;
}
int insert(int list[],int size,int elem)
{
  int i;
  for(i=size-1;i>=0;i--)
  {
   if(list[i]>elem)
     list[i+1]=list[i];
  }
  list[i+1]=elem;
  
  }
void InsertionSort(int list[],int size)
{
  int pass,i,elem;
  for(pass=1;pass<size;pass++)
  {
  elem=list[pass];
  insert(list,pass,elem);
  }
return;
}

int main(void)
{
	int list[100];
	//input
	readlist(list,8);
	printf("list before swapping:");
	printlist(list,8);
	InsertionSort(list,8);
	//output
	printf("list after swapping:");
	printlist(list,8);
	return 0;
	}

 
