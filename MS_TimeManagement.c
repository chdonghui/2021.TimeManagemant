// C Leng �⺻ ��ɾ� ���� 
#include<stdio.h>
// windows system ��ɾ� (cmd) ����
#include<windows.h>  

// Timer �Լ��� ���� 
int timer(int min);

int main(){
	// ���� ����
	// min_cen ���߽ð�, min_free ���½ð�, rep �ݺ� Ƚ�� 
	int min_cen, min_free, rep;
	// �ݺ��� ���� ������ 
	int i, j, k;
	
	// �ȳ�
	printf("�ð� ������ ���� ���α׷��Դϴ�\n");
	printf("********************************\n\n");
	
	// ������ �Է� 
	// ���� �ð� 
	printf("������ �ð��� �Է��ϼ���\n");
	scanf("%d", &min_cen);
	printf("%d ���� �ԷµǾ����ϴ�\n\n", min_cen);
	// ���� �ð� 
	printf("���� �ð��� �Է��ϼ���\n");
	scanf("%d", &min_free);
	printf("%d ���� �ԷµǾ����ϴ�\n\n", min_free);
	// �ݺ� Ƚ�� 
	printf("�ݺ� Ƚ���� �Է��ϼ���\n");
	scanf("%d", &rep);
	printf("%d ���� �ԷµǾ����ϴ�\n\n", rep);
	
	// �ݺ� Ƚ�� ��ŭ �ݺ����ִ� �Լ� 
	for(i=1; i<=rep; i++){
		// ���� �ð���ŭ timer �Լ��� ���� 
		printf("���� �ð�: %d��\n", timer(min_cen));
		// ������� �Բ� �ٹٲ� 
		printf("\a\n");
		// ����� �޼��� ��� 
		system("msg %username% ���½ð��Դϴ�! ������!");
		// ���� �ð���ŭ timer �Լ��� ���� 
		printf("���� �ð�: %d��\n", timer(min_cen));
		// ������� �Բ� �ٹٲ� 
		printf("\a\n");
		// �����϶�� �޼��� ���
		system("msg %username% ������ �ð��Դϴ�! �����ϼ���!");

	}
	printf("���α׷��� ��� ���ƽ��ϴ�\n\n");
	system("pause");
	return 0;
}

// Timer �Լ� �Դϴ� 
int timer(int min){
	// �ð��� ��� �� ���� �Դϴ� 
	int i;
	// sleep�Լ��� 1���̱� ������ 1���� 60�ʷ� �ٲپ��ִ� �����Դϴ� 
	min = min*60;
	
	// �ʸ� ����ϴ� �ݺ����Դϴ�
	for(i=min; i>=1; i--){
			printf("%d\n\n", i);
			sleep(1);
		}
	
	// 60�ʸ� 1������ �ٲپ� �����ϰ� �ֽ��ϴ� 
	return min/60;
}


