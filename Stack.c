#include<stdio.h>

struct stack
{
	int s[100];
	static int top=-1;
};

void push(struct stack st);
int pop(struct stack st);
int main()
{
	int n,i=0,ch,del_n;
	printf("Enter the number of stacks that you want to use:\n");
	scanf("%d",&n);

	struct stack Stacks[n];
	
	do
	{
		printf("Enter the stack with which you want to work from 0 to %d:\n",(n-1));
		printf("If you want to exit then press -1\n");
		scanf("%d",&i);


		printf("1. Push\n 2. Pop\n 3. Display\n 4. Exit from operations for this stack\n");
		printf("Enter your choice for the operation:\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push(Stacks[i]);
				break;
			case 2: del_n=pop(Stacks[i]);
				if(del_n!=-99999)
					printf("Popped Element=%d\n",del_n);
				break;
			case 3: display(Stacks[i]);
				break;
			case 4: break;

		}
	}while(i!=-1);
	
}
void push(struct stack st)
{
	int new_n;
	if(st.top==100)
	{
		printf("Stack is full\n");
		return;
	}
	else{
		printf("Enter a new number:\n");
		scanf("%d",&new_n);
		st.s[++top]=new_n;
	}	
}
int pop(struct stack st)
{
	if(st.top==-1)
	{

		printf("Stack is empty\n");
		return -99999;
	}
	else
		return st.s[top--];
	
}
void display(struct stack st)
{
	int i;
	if(st.top==-1)
	{
		printf("Stack is empty\n");
		return;
	}
	else
	{
		for(i=st.top;i>=0;i--)
		{
			printf("%d ",st.s[i]);
		}
		printf("\n");
	}
	
}

