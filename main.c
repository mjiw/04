#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int second=0;
	printf("input the second :");
	scanf("%d",&second);
	
	int a=(second/60)/60;
	int b=(second/60)-(((second/60)/60)*60);
	int c=second%60;
	
	printf("The time for %d second is %d:%d:%d\n",second,a,b,c);
	
	return 0;
}
