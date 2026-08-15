#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int evaluat_RPN_expression(const char* expression);
char a[100];
void push(int value);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
bool is_full(void);
bool is_empty(void);

int RPN_STACK[STACK_SIZE];
int top = 0;

int main()
{
	printf("Enter an RPN expression: ");

	do
	{
		scanf(" %[^\n]", a);
		printf("Value of expression: %d\n", evaluat_RPN_expression(a));
		while ((getchar() != '\n'));
		top = 0;
		printf("Enter an RPN expression: ");

	} while (1);

	return 0;
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

int evaluat_RPN_expression(const char* expression)
{
	int a = 0, b = 0;

	for(int i=0;expression[i]!='\0';i++)
	if (expression[i] >= '0' && expression[i] <= '9')
		push(expression[i] - '0');
	else if (expression[i] == '+')
	{
		a = pop();
		b = pop();
		push(a + b);
	}
	else if (expression[i] == '-')
	{
		a = pop();
		b = pop();
		push(b - a);
	}
	else if (expression[i] == '*')
	{
		a = pop();
		b = pop();
		push(a * b);
	}
	else if (expression[i] == '/')
	{
		a = pop();
		b = pop();
		push(b / a);
	}

	return pop();
}