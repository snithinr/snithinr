#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void readlist(int list[],int size)
{
     int i;
     printf("Enter %d elements:",size);
     for(i=0;i<size;i++)
     {
     scanf("%d",&list[i]);
     }
     return;
}
void printlist(int list[],int size)
{
  int i;
  for(i=0;i<size;i++)
    {
    printf("%d",list[i]);
    }
 printf("\n");
 return;
}
bool linearsearch(int list[],int size,int key,int *pos)
{
  int i;
  for(i=0;i<size;i++)
  {
   if(list[i]==key)
    {
     *pos=i;
     return true;
    }
  return false;
  }
}
int main(void)
{
	bool res;
	int key,pos;
	int list[100];
	//input
	readlist(list,10);
	printf("enter key to search:");
	scanf("%d",&key);
	res=linearsearch(list,10,key,&pos);
	if(res==true)
	{
	   printf("the given element is in the position:%d",pos);
	}
	else
	{
		printf("the given element is not in the list");
	}
return 0;
}


