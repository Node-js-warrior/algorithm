#include <stdio.h>
int dwarfs[9]={0};
int compare(const void *e1, const void *e2){
	if(*(int*)e1 > *(int*)e2)
		return 1;
	else if(*(int*)e1 < *(int*)e2)
		return -1;
	else 
		return 0;
}
void get_dwarfs(){
	int i, j=0;
	int sum=0;
	int out1, out2=0;

	qsort(dwarfs, 9, sizeof(int), compare);

	for(i=0;i<9;i++){
		sum=sum+dwarfs[i];
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(i==j)
				continue;
			if((sum-100)==(dwarfs[i]+dwarfs[j])){
				out1=i;
				out2=j;
			}
		}
	}
	for(i=0;i<9;i++){
		if((i!=out1) && (i!=out2))
			printf("%d\n", dwarfs[i]);
	}
}
int main(){
	int i=0;

	for(i=0;i<9;i++){
		scanf("%d", &dwarfs[i]);
	}

	get_dwarfs();

	return 0;
}
