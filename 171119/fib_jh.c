#include <stdio.h>
int n;
 
int main(void) {
    scanf("%d", &n);
    long long a1, a2, a3;
    a1 = 0;
    a2 = 1;
    if (n == 0) {
        printf("%d", 0);
    } else if (n == 1) {
        printf("%d", 1);
    } else {
        while ( n-1 > 0) {
            a3 = a2 + a1;
            a1 = a2;
            a2 = a3;
            n--;
             
        }
        printf("%lld", a3);
         
    }
    return 0;
     
}
