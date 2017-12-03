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
		if (j == 0){                           //0杠よ1~12计
			for (int i = 2; i <= 12; i++){
				printf("%d翴\t", i);
				if (i == 12) printf("\n");     //12︽传︽じ
			}
		}
		else{                                  //1杠よ1~12羆计秖
			for (int i = 2; i <= 12; i++){
				printf("%d\t", resultcnt[i]);
			}
		}
	}

	float persant_7 = ((float)resultcnt[7] / 36000);
	float sixof1 = ((float)1 / (float)6);
	printf("\n\n羆7计秖场%.4f%%", persant_7*100);
	printf("籔6だぇ1(16.6666%%)畉禯%.4f%%\n",get_abs(((persant_7-sixof1)*100)));
	system("pause");
	return 0;
}

float get_abs(float a){            //荡癸ずㄧΑabs钡int俱计?
	if (a < 0) a *= -1;
	return a;
}
