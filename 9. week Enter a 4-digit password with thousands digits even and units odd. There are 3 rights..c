#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n,m,counter;
	counter=1;
	printf("\nenter pasword with four digits:\n");
	
	while(counter<=3){
		scanf("%d",&n);
		m=n/1000;
		
		if((n>999)&&(n<10000)&&(n%2==1)&&(m%2==0)){
		    printf("CONGRATILATIONS correct pasword!\n\n\n");
		    counter=4;
	    }
	
		else if(counter<3){
			printf("incorrect pasword TRY AGAIN!\n");
			counter++;
		}
		else 
		printf("incorrect pasword!\n\n\n");
	}
}
