#include <stdio.h>
int main() {
	int m = 0, d = 0;
	char* day[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	char* start = day[0];	// 2017년 1월 1일 첫 시작일의 요일
	int sum = 0;	// 시작날짜부터 입력된 날짜까지 총 날짜를 담을 변수

	scanf("%d %d", &m, &d);

	for (int i = 1; i <= (m-1); i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			sum += 31;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			sum += 30;
		}
		else {	//2월이면
			sum += 28;
		}
	}

	sum += d;	// 입력받은 날짜(day)를 더함

	printf("%s", day[(sum % 7) - 1]);

}
