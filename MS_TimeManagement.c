// C Leng 기본 명령어 모음 
#include<stdio.h>
// windows system 명령어 (cmd) 모음
#include<windows.h>  

// Timer 함수를 선언 
int timer(int min);

int main(){
	// 변수 선언
	// min_cen 집중시간, min_free 쉬는시간, rep 반복 횟수 
	int min_cen, min_free, rep;
	// 반복문 증감 연산자 
	int i, j, k;
	
	// 안내
	printf("시간 관리를 위한 프로그램입니다\n");
	printf("********************************\n\n");
	
	// 데이터 입력 
	// 집중 시간 
	printf("집중할 시간을 입력하세요\n");
	scanf("%d", &min_cen);
	printf("%d 분이 입력되었습니다\n\n", min_cen);
	// 쉬는 시간 
	printf("쉬는 시간을 입력하세요\n");
	scanf("%d", &min_free);
	printf("%d 분이 입력되었습니다\n\n", min_free);
	// 반복 횟수 
	printf("반복 횟수를 입력하세요\n");
	scanf("%d", &rep);
	printf("%d 번이 입력되었습니다\n\n", rep);
	
	// 반복 횟수 만큼 반복해주는 함수 
	for(i=1; i<=rep; i++){
		// 집중 시간만큼 timer 함수를 실행 
		printf("집중 시간: %d분\n", timer(min_cen));
		// 경고음과 함꼐 줄바꿈 
		printf("\a\n");
		// 쉬라는 메세지 출력 
		system("msg %username% 쉬는시간입니다! 쉬세요!");
		// 쉬는 시간만큼 timer 함수를 실행 
		printf("쉬는 시간: %d분\n", timer(min_cen));
		// 경고음과 함꼐 줄바꿈 
		printf("\a\n");
		// 집중하라는 메세지 출력
		system("msg %username% 집중할 시간입니다! 집중하세요!");

	}
	printf("프로그램을 모두 마쳤습니다\n\n");
	system("pause");
	return 0;
}

// Timer 함수 입니다 
int timer(int min){
	// 시간을 계산 할 변수 입니다 
	int i;
	// sleep함수가 1초이기 때문에 1분인 60초로 바꾸어주는 과정입니다 
	min = min*60;
	
	// 초를 계산하는 반복문입니다
	for(i=min; i>=1; i--){
			printf("%d\n\n", i);
			sleep(1);
		}
	
	// 60초를 1분으로 바꾸어 리턴하고 있습니다 
	return min/60;
}


