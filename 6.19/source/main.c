 #include<stdio.h>
 #include<stdlib.h>
float get_abs(float a);
int resultcnt[13];
int a,b;
int main(void)
{
	srand(time(0));
	for (int i = 0; i < 36000; i++){
		a = 1 + rand() % 6;
		b = 1 + rand() % 6;
		resultcnt[a + b]++;
	}
	for (int j = 0; j <= 1; j++){
		if (j == 0){                           //0���ܦL�X�W��1~12���Ʀr
			for (int i = 2; i <= 12; i++){
				printf("%d�I\t", i);
				if (i == 12) printf("\n");     //12��ɥ[�J����r��
			}
		}
		else{                                  //1���ܦL�X�W��1~12���`�ƶq
			for (int i = 2; i <= 12; i++){
				printf("%d\t", resultcnt[i]);
			}
		}
	}

	float persant_7 = ((float)resultcnt[7] / 36000);
	float sixof1 = ((float)1 / (float)6);
	printf("\n\n�`�X��7���ƶq��������%.4f%%�A", persant_7*100);
	printf("�P6����1(��16.6666%%)�t�Z%.4f%%\n",get_abs(((persant_7-sixof1)*100)));
	system("pause");
	return 0;
}

float get_abs(float a){            //������ȡA���ب禡��abs���G�u�౵��int���?
	if (a < 0) a *= -1;
	return a;
}
