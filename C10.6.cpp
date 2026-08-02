#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

void RPN(void);
void push(int value);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
bool is_full(void);
bool is_empty(void);

char ch;
int RPN_STACK[STACK_SIZE];
int top = 0;

int main()
{
	printf("Enter an RPN expression: ");
		
	do
	{
		scanf(" %c", &ch);
		RPN();

		if ((ch < '0' || ch>'9') && ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch!= '=')
			break;

		if(ch == '=')
		{
			printf("Value of expression: %d\n", RPN_STACK[top - 1]);
			while ((getchar() != '\n'));
			top = 0;
			printf("Enter an RPN expression: ");
		}

	} while (1);
	
	return 0;
}

void RPN(void)
{
	int a = 0,b = 0;

	if (ch >= '0' && ch <= '9')
		push(ch - '0');
	else if (ch == '+')
	{
		a = pop();
		b = pop();
		push(a + b);
	}
	else if (ch == '-')
	{
		a = pop();
		b = pop();
		push(b - a);
	}
	else if (ch == '*')
	{
		a = pop();
		b = pop();
		push(a * b);
	}
	else if (ch == '/')
	{
		a = pop();
		b = pop();
		push(b / a);
	}

}

void push(int value)
{
	if (is_full())
		stack_overflow();
	else
	    RPN_STACK[top++] = value;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return RPN_STACK[--top];
}

void stack_overflow(void)
{
	printf("Expression is too complex");
	exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
	printf("Not enough operands in expression");
	exit(EXIT_FAILURE);
}

bool is_full(void)
{
	if (top >= STACK_SIZE)
		return true;
	else
		return false;
}

bool is_empty(void)
{
	if (top <= 0)
		return true;
	else
		return false;
}
