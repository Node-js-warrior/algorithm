#include <stdio.h>
int main(){
	int *pick;
	int *line_num;
	int num;
	int i,j;
	
	scanf("%d", &num);

	pick = (int*)malloc(sizeof(int)*num);
	line_num = (int*)malloc(sizeof(int)*num);
	i=0;
	do{
		scanf("%d", &pick[i]);
		i++;
	}while(getc(stdin)==' ');

	line_num[0]=0;

	for(i=1;i<num;i++){
		if(pick[i]==0)
			line_num[i]=i;
		else{
			for(j=i;j>(i-pick[i]);j--){
				line_num[j]=line_num[j-1];
			}
			line_num[i-pick[i]] = i;
		}
	}

	for(i=0;i<num;i++){
		printf("%d ", line_num[i]+1);
	}

	return 0;
}
