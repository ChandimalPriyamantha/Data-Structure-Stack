#include <stdio.h>
#define MAX 5

int top=-1;
int stack_arr[MAX];

void push(int data){
	if(isFull()){
		printf("Stack is overFlow.");
		exit(1);
	}
	top++;
	stack_arr[top]= data;
	
}

int pop(){
	
	if(isEmpty()){
		printf("Stack is overFlow.");
		exit(1);
	}
	
	int value;
	value = stack_arr[top];
	top--;
	return value;
		
}

int isFull(){
	if(top == MAX-1){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(){
	if(top == -1){
		return 1;
	}else{
		return 0;
	}
}

void print()
{
	int value;
	int n;
	for(n=top; n>=0; n--){
	  value = stack_arr[n];
	  printf("%d\n",value);	
	}
	
}
int main(){
	
	int choice, data;
	while(1){

	printf("1.Push\n");
	printf("2.Pop\n");
	printf("3.Print all of data in the stack.\n");
	printf("4.exit\n");
	printf("Enter your  choice: ");
	scanf("%d",&choice);
	
	
	
	switch(choice){
		case 1:
			printf("Enter push value: ");
			scanf("%d",&data);
			push(data);
			break;
		case 2:
			data = pop();
			printf("Pop value is: %d",data);
			break;
		case 3:
			print();
			break;
		case 4:
			printf("Exit..!");
			break;
		default:
			printf("Wrong choice..!");
		    break;
			
	}
	
	printf("\n\n");
	
	}
}
