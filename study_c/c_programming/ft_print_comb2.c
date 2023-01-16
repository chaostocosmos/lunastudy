#include<stdio.h>
#include<unistd.h>

void ft_print_comb2(void);

void main(){

	ft_print_comb2();

}

void ft_print_comb2(){
	
	char a[7];
	a[0] = '0';
	a[1] = '0';
	a[3] = '0';
	a[4] = '0';
	a[2] = ' ';
	a[5] = ',';
	a[6] = ' ';
	
	
	while(a[4]<':'){
		if(a[4]=='9'){
			if(a[0]=='9' && a[1]=='9' && a[3]=='9'){
				write(1,a,5);
				write(1,"\n",1);
				break;
			}
			write(1,a,7); //last coner case here! 
			a[3]++;
			a[4]='0';
			
		}
		if(a[3]==':'){
		//	write(1,a,7);
			a[1]++;
			a[3]='0';
		}
		if(a[1]==':'){
		//	write(1,a,7);
			a[0]++;
			a[1]='0';
		}
		//if(a[0]==':'){
		//	write(1,"\n",1);
		//	break;			
		//}
		
		write(1,a,7);
		a[4]++;

	}



}


