#include<stdio.h>
int main() {
	int num;
	int result = 1;
	printf_s("���丮�� ���� ���� ������ �ϳ� �Է����ּ���: ");
	scanf_s("%d", &num);
	while (num != 1) {
		result = result * num;
		num--;

	}
	printf("�Է��� ������ ���丮�� ���� : %d" , result);
	return 0;
}