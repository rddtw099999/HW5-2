#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int recursiveMaximum(int data[], int num);

int main(void)
{
	int i;
	printf("�п�J�}�C�j�p: ");
	scanf_s("%d", &i);

	int *c = malloc(i*sizeof(int));  //�t�mi��int�j�p���O����Ŷ�
	for (int j = 0; j < i; j++){
		int x;
		printf("��J��%d��:", j+1);
		scanf_s("%d", &x);
		c[j] =x;
	}
	for (int l = 0; l < i; l++){
		printf("data[%d]=%d ",l ,c[l]);
	}

	printf("\n\n�̤j�Ʀr�� : %d\n", recursiveMaximum(c, i));
	free(c); //����O����Ŷ�
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