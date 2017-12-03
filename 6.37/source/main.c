#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int recursiveMaximum(int data[], int num);

int main(void)
{
	int i;
	printf("請輸入陣列大小: ");
	scanf_s("%d", &i);

	int *c = malloc(i*sizeof(int));  //配置i個int大小的記憶體空間
	for (int j = 0; j < i; j++){
		int x;
		printf("輸入第%d個:", j+1);
		scanf_s("%d", &x);
		c[j] =x;
	}
	for (int l = 0; l < i; l++){
		printf("data[%d]=%d ",l ,c[l]);
	}

	printf("\n\n最大數字為 : %d\n", recursiveMaximum(c, i));
	free(c); //釋放記憶體空間
	system("pause");
	return 0;

}


int recursiveMaximum(int data[], int num)
{
	if (num == 1)	return data[0];
	else
	{
		if (data[num - 1] > recursiveMaximum(data, num - 1) )return data[num - 1];
		else return recursiveMaximum(data, num - 1);	
	}
}