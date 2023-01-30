#include<stdio.h>
#include<unistd.h>

void ft_is_negative(int n);

void main(){
	
	ft_is_negative(7);

}

void ft_is_negative(int n){
	
	if(n>0){
		write(1,"+",1);
	}
	else{
		write(1,"-",1);
	}
	write(1,"\n",1);


}
