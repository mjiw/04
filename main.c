#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("input two integers :");
	scanf("%i %i",&x,&y);
	
	
	int p=x+y;
	int m=x-y;
	int c=x*y;
	int d=x/y;
	int e=x%y;
	
	printf("+ result is %d\n",p);
	printf("- result is %d\n",m);
	printf("* result is %d\n",c);
	printf("/ result is %d\n",d);
	printf("%% result is %d\n",e);
	
	return 0;
}
