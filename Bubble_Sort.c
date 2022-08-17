#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void readlist(int[],int);
void printlist(int[],int);
void bubblesort(int[],int);
int main(void)
{
	int list[20];
	char choice;
	int key,res;
	//input
	readlist(list,8);
	printf("before swapping list is :\n");
	printlist(list,8);
	//proces
	bubblesort(list,0);
	//output
	printf("after sorting the list is:");
	printlist(list,0);
	return 0;
}
void readlist(int list[],int size)
{
int i;
printf("enter the %d elements\n",size);
for(i=0;i<size;i++)
  scanf("%d",&list[i]);
    //list[i]=rand%100;
  return;
}
void printlist(int list[],int size)
{
  int pass,i,temp;
  for(pass=1;pass<size;pass++)
  {
  printf("pass %d",list[i]);
  printf("\n");
  return;
  }
 }
void bubblesort(int list[],int size)
{
int pass,i,temp,a=1,b=0;
for(pass=1;pass<size;pass++)
{
 b=0;
 if(a==b)
 break;
 a=0;
 printf("pass number:%d",pass);
 for(i=0;i<size-pass;i++)
 {
 if(list[i]>list[i+1])
 {
  temp=list[i];
  list[i]=list[i+1];
  list[i+1]=temp;
  printlist(list,0);
  a++;
  }
  }
  }
  }
 
