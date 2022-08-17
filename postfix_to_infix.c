#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 100
int stack[81];
int tos = -1;
void push(int elem)
{
	stack[++tos] = elem;
}
int pop()
{
	return stack[tos--];
}
bool isOperator(char token)
{
	switch(token)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%': return true;
                default: return false;
                	
	}
	
} 
