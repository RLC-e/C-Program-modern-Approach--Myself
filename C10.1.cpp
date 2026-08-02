#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

bool is_full();
bool is_empty();
void push(char ch);
char pop();
void stack_overflow();
void stack_underflow();

char contents[STACK_SIZE];
char ch;
int top = 0, over = 1, under = 1,n = 1;

int main()
{
	printf("Enter parenteses and/or braces: ");
	for (int i = 0;i < 100;i++)
	{
		contents[i] = '0';
	}

	do
	{
		ch = getchar();

		if (ch != '\n')
			push(ch);
		else break;

		if (ch == ')')
		{
			pop();

		    if (over == 0)
		    {
			    printf("Stack overflow");
			    break;
		    }
		    else if (under == 0)
		    {
			    printf("Stack underflow");
			    break;
		    }
		     	else if (pop() == '(')
				;
			else
			{
				printf("Parenteses/braces are not nested properly");
				n = 0;
				break;
			}
		}

		if (ch == '}')
		{
			pop();

			if (over == 0)
			{
				printf("Stack overflow");
				break;
			}
			else if (under == 0)
			{
				printf("Stack underflow");
				break;
			}
			else if (pop() == '{')
				;
			else
			{
				printf("Parenteses/braces are not nested properly");
				n = 0;
;				break;
			}
		}
	} while (ch != '\n');

	if ( top == 0 && n == 1)
		printf("Parenteses/braces are nested properly");
	
	return 0;
}

void push(char ch)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = ch;
}

char pop()
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

bool is_full()
{
	if (top >= 99)
		return true;
	else
		return false;
}

bool is_empty()
{
	if (top <= 0)
		return true;
	else
		return false;
}

void stack_overflow()
{
	over = 0;
}

void stack_underflow()
{
	under = 0;
}

