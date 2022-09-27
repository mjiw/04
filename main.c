#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int second=0;
	printf("input the second:");
	scanf("%d",&second);
	
	int t=second/60;
	
	int s=second%60;
	
	printf("the time is %d:%d",t,s);
	
	
	return 0;
}
