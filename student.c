#include <stdio.h>
void main(void) {
	int math, eng, social, total;
	double avg;
	printf("���� ���� �Է�:");
	scanf_s("%d", &math);
	printf("���� ���� �Է�:");
	scanf_s("%d", &eng);
	printf("��ȸ ���� �Է�:");
	scanf_s("%d", &social);
	total = math + eng + social;
	printf("\n�հ�:%d\n",total);
	avg = (double)total / 3;
	printf("���:%f",avg);


	
	
}
