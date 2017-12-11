#include<stdio.h>

int main()
{
    char day[12][4]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int mon[12]={1,4,4,7,2,5,7,3,6,1,4,6};
    int x,y;
    
    scanf("%d %d",&x,&y);
    printf("%s\n",day[(mon[x-1]+y-1)%7]);
    return 0;
}
