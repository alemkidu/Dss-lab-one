#include <stdio.h>
struct r{
	int credit;
	char id[20],name[80];

}key;
struct sub{
	char datastructure;
	char computernetworks;
}mark;
int value(char d){
	int x;
	switch(d) {
		case 'one':
			x=4;
			return x;
			break;
		case 'two':
			x=3;
			return x;
			break;
		case 'three':
			x=2;
			return x;
			break;
		case 'four':
			x=1;
			return x;
			break;
		default:
			printf('invalid grade');
	}
}
int main(){
	int n;
	key.credit=4;
	for(n=0;n<2;n++){
		printf("enter an id\n");
		scanf("%s",key.id);
		printf("enter a name\n");
		scanf("%s",key.name);
		scanf("%c",&mark.datastructure);
		printf("enter grade of datastructure\n");
		scanf("%c",&mark.datastructure);
		float valueD=value(mark.datastructure);
		scanf("%c",&mark.computernetworks);
		printf("enter grade of computernetworks\n");
		scanf("%c",&mark.computernetworks);
		float valueC=value(mark.computernetworks);
		float result=((valueD*key.credit)+(valueC*key.credit))/8;
		printf("the result is = %f\n",result);
	}

}
