#include <stdio.h>
int fibo(int n){
	int i;
	int *set=(int*)malloc(sizeof(int)*n);

	set[0]=0;
	set[1]=1;

	for(i=2;i<=n;i++){
		set[i]=set[i-1]+set[i-2];
	}
	
	return set[n];
}
void main(){
	int n;
	int result;

	scanf("%d", &n);

	result = fibo(n);

	printf("%d", result);
}