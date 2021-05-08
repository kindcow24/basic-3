#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자: %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		printf("남은 기회 %d번", chance--);
		printf("숫자를 맞혀보세요 (1~100 : ");
		scanf_s("%d", &answer);
		if (answer < num)
		{
			printf("Up!! \n\n");
		}
		else if (answer > num)
		{
			printf("Down!! \n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다! \n\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생");
		}
		if (chance == 0)
		{
			printf("기회를 다 썼네요..아쉽지만 다음 기회에 ^^^^^^\n");
			break;
		}
	}
	return 0;
