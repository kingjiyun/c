#include <stdio.h>
void main(void) {
	int math, eng, social, total;
	double avg;
	printf("수학 점수 입력:");
	scanf_s("%d", &math);
	printf("영어 점수 입력:");
	scanf_s("%d", &eng);
	printf("사회 점수 입력:");
	scanf_s("%d", &social);
	total = math + eng + social;
	printf("\n합계:%d\n",total);
	avg = (double)total / 3;
	printf("평균:%f",avg);


	
	
}
