#include <stdio.h>
#include <locale.h>
#define N 10
int main()
{
	int tempcnt = 0,cnt = 0,flag = 0;
	double masX[N];
	setlocale(LC_ALL, "RUS");

	printf("Введите %d чисел через Enter:\n", N);
	for (int i = 0; i < N; i++) {
		scanf("%lf", &masX[i]);
	}

	for (int i = 0; i < N; i++) {
		if (flag == 0 && masX[i] == 0)
		{
			flag = 1;
			continue;
		}
		if (flag && masX[i])
			tempcnt++;
		else if (flag && masX[i] == 0)
		{
			cnt = tempcnt;
			tempcnt++;
		}
	}

	printf("Кол-во элементов массива между между первым и последним нулевыми элементами = %d\n", cnt);
	system("pause");
}