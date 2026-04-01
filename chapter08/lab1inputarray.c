#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
	int total = 0; 
	int input_value;
	
	int size = 20;
	int input[20] = 0;


	//초기화로 모든 원소에 0을 저장 // size 20인 배열 선언하셔서 사용
	// 크기가 20인 int형 배열 input을 선언하고 모든 원소를 0으로 초기화하세요

	printf("배열에 저장할 정수를 여러 개 입력하시오. ");
	printf("0을 입력하면 입력을 종료합니다.\n");
	// 인덱스 변수 i를 0으로 초기화하세요
	// do-while문을 사용해 scanf("%d", &input[i]); 로 정수를 입력받고, input[i++] != 0인 동안 반복하세요
	int index = 0; 
	
do {
        if (index >= size) {
            printf("배열이 가득 찼습니다.\n");
            break;
        }
        printf("정수 입력: ");
        scanf("%d", &input_value);
        input[index] = input_value;
        index++;
    } while (input_value != 0);  

    printf("입력한 정수: ");
    int i = 0;  
    while (input[i] != 0 && i < size) {
        printf("%d ", input[i]);
        i++;
    }

    puts("");  

    return 0;
}

