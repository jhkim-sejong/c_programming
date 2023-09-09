/***********************************************************************
* FILENAME :        calculator_simple.c
*
* DESCRIPTION :
*       두 실수를 입력받아서 가감승제를 계산하는 프로그램
*
* PUBLIC FUNCTIONS :
*       None
*
* NOTES :
*       프로그래밍 수업을 위한 예제 코드임
*       함수를 사용하지 않고 가감승제를 출력하는 프로그램 예
*
*       Copyright - BSD License (3-Clause)
*
* AUTHOR :    Jaeho Kim (kimjh@sejong.ac.kr) 
*
* HISTORY :
* 		1 Sep 2021 : Created
* 		7 Sep 2022 : Updated : float 나눗샘 기능 추가
* 		4 Sep 2023 : Updated : float 사칙연산으로 변경
*/

#include <stdio.h>

int main(void)
{
	float first_var, second_var;
	float sum, diff, mul, div;

	/* 계산기 입력 수행 */
	printf("첫번째 수를 입력하시오: ");	
	scanf("%f", &first_var);		  // 사용자로부터 첫번째 수입력
	printf("두번째 수를 입력하시오: ");	
	scanf("%f", &second_var); 		  // 사용자로부터 첫번째 수입력
	
	/* 실수에 대한 사칙연산을 수행 */
	sum =  first_var + second_var; 
	diff =  first_var - second_var; 
	mul =  first_var * second_var; 
	div =  first_var / second_var; // [ToDo] 두번째 수가 0이 입력되면 런타임 오류 발생: 처리 필요 

	/* 계산기 출력 수행 */
	printf("\n");
	printf("두수의 합:    %6.2f\n", sum);
	printf("두수의 차:    %6.2f\n", diff);
	printf("두수의 곱:    %6.2f\n", mul);
	printf("두수의 나누기: %6.2f\n", div);

	return 0; 
}
