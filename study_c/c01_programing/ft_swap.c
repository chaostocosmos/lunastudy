#include<unistd.h>
#include<stdio.h>

void ft_swap(int *a ,int *b);

void ft_swap(int *a ,int *b){

	int i;

	i = *a;
	printf("%d\n",i);
	*a = *b;

	printf("%d\n",*a);
	*b = i;
	
	printf("%d\n",*b);

}

void main(){

	int a;
	int b;
	a = 4;
	b = 8;
	ft_swap(&a,&b);

}


