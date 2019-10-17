#include <stdio.h>

int main(){

	int f0=0,f1=1,y,x,sum=0;

    printf("enter a number:");

	scanf("%d",&x);

	for(y=0;y<x;y++){

		if(y==0){

			printf("%d\n",y);
		}
		else if(y==1){

			printf("%d\n",y);
		}
		else{

			sum=f0+f1;

			f0=f1;

			f1=sum;

			printf("%d\n",sum);
		}
	}
}
