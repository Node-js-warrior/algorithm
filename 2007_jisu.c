#include <stdio.h>
int main() {
	int m = 0, d = 0;
	char* day[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	char* start = day[0];	// 2017�� 1�� 1�� ù �������� ����
	int sum = 0;	// ���۳�¥���� �Էµ� ��¥���� �� ��¥�� ���� ����

	scanf("%d %d", &m, &d);

	for (int i = 1; i <= (m-1); i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			sum += 31;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			sum += 30;
		}
		else {	//2���̸�
			sum += 28;
		}
	}

	sum += d;	// �Է¹��� ��¥(day)�� ����

	printf("%s", day[(sum % 7) - 1]);

}
