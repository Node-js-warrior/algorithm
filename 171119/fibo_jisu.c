#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	printf("%d\n", get_fibo(num));
}
int get_fibo(int num) {
	int sum = 0;
	int * a;

	a = (int *)malloc(sizeof(int *) * num);		// ���� �޸� �Ҵ�
	a[0] = 0;
	a[1] = 1;
	
	for (int i = 2; i <= num; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	/* ���
	for (int i = 0; i <= num; i++) {
		printf("%d\n", a[i]);
	} */

	sum = a[num];
	return sum;
}