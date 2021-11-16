#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define N 200
int main(void)
{
	int arr1[N];
	int arr2[N];
	srand(time(NULL));
	printf(" Data : X  \n");
	for (int i = 0; i < N; i++)
	{
		int num = 145 + rand() % (192 - 145); //(190-145);
		arr1[i] = num;
		printf("\t%5.d", num);
		if (i % 10 == 0)
			printf("\t\n");
	}
	printf("\t\n");
	printf("Data : Y \n");
	for (int i = 0; i < N; i++)
	{
		int num = 80 + rand() % 20; //(190-145);
		arr2[i] = num;
		printf("\t%5.d", num);
		if (i % 10 == 0)
			printf("\t\n");
	}
	printf("\n");
	//	for(int i=0;i<N;i++){
	//		for(int k=0;k<2;k++){
	//			if(i>=N) break;
	//			for(int y=0;y<12;y++){
	//				switch(k){
	//					case 0:if(i>=N) break;
	//						printf("%3d  ",arr1[i+y]);
	//						break;
	//					case 1:if(i>=N) break;
	//						printf("%3d  ",arr1[i+y]);
	//						break;
	//				}
	//			}
	//		}
	//		i+=12;
	//	}
	return 0;
}
