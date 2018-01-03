#include <stdio.h>
int count=0;
int *virus;
int dp_check(int n){
	int i=0;

	for(i=0;i<count;i++){
		if(virus[i]==n)
			break;
	}
	if(i==count)
		return 1;
	else 
		return 0;
}
void count_virus(int **l, int pn, int num){
	int i=0;
	
	for(i=0;i<pn;i++){
		if((l[i][0]==num) && (dp_check(l[i][1])==1)){
		    virus[count] = l[i][1];
		    count++;
			  count_virus(l,pn,l[i][1]);
	    }
	    else if((l[i][1]==num) && (dp_check(l[i][0])==1)){
		    virus[count] = l[i][0];
		    count++;
			  count_virus(l,pn,l[i][0]);
	    }
	}
}
int main(){
	int c_num, p_num=0;
	int i=0; 
	int **link;

	scanf("%d", &c_num);
	scanf("%d", &p_num);

	link = (int**)malloc(sizeof(int *)*p_num);
	virus = (int*)malloc(sizeof(int)*c_num);

	for(i=0;i<p_num;i++){
		link[i] = (int*)malloc(sizeof(int)*2);
		scanf("%d %d", &link[i][0], &link[i][1]);
	}

	count_virus(link, p_num, 1);

	printf("%d", count-1);
	
	return 0;
}
