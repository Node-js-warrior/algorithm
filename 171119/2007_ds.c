#include <stdio.h>
void DayOfTheWeek(int x, int y){
	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	int sum=0;
	char fday;

	if(x==1)
		sum = y;
	else{
		for(i=0;i<x-1;i++){
		   sum=sum+m[i];
	    }
		sum=sum+y;
	}

	if(sum%7==0)
		printf("SUN");
	else if(sum%7==1)
		printf("MON");
	else if(sum%7==2)
		printf("TUE");
	else if(sum%7==3)
		printf("WED");
	else if(sum%7==4)
		printf("THU");
	else if(sum%7==5)
		printf("FRI");
	else if(sum%7==6)
		printf("SAT");
}
int main(){
	int month=1;
	int day=1;

	scanf("%d %d", &month, &day);

	DayOfTheWeek(month, day);

	return 0;
}
