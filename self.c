#include <stdio.h>
#define MAX_SIZE 100

/*
Жигунов Кирилл Андреевич
ПИ 1-1
Одномерные массивы и статистика элементов
*/

int main(void) {
	int a[MAX_SIZE], b[MAX_SIZE], n;
	printf("Enter n(1-100): \n");
	if (scanf("%d", &n)!=1) {
	    printf("Input error\n");
	    return 1;
	}
	if (n<1||n>MAX_SIZE) {
	    printf("Size error\n");
	    return 1;
	}
	for(int i = 0; i<n; i++){
	    printf("a[%d]", i);
	    if(scanf("%d", &a[i]) != 1){
	        printf("Input error");
	        return 1;
	    }
	    if (a[i] < -1000 || a[i] > 1000) {
	        printf("Value error");
	        return 1;
	    }
	}
	long long sum = 0;
	long long sumb = 0;
	int positive = 0, negative = 0, zero = 0;
	for (int i = 0; i<n; i++){
	    sum += a[i];
	    if(a[i] > 0) {
	        positive++;
	    }else if (a[i] < 0){
	        negative++;
	    } else {
	        zero++;
	    }
	}
	int replaced;
	for (int i = 0; i < n; i++){
	    if(a[i] < 0){
	        b[i] = 0;
	        replaced++;
	    } else {
	        b[i] = a[i];
	    }
	}
	for (int i=0; i<n; i++) {
	    sumb += b[i];
	}
	double average = (double)sum/n;
	printf("\nArray a:");
	for (int i = 0; i<n; i++) {
	    printf("%d", a[i]);
	}
	printf("\nArray b:");
	for (int i = 0; i<n; i++) {
	    printf("%d", b[i]);
	}
	printf("\nSum b = %lld\n", sumb);
	/*
	printf("\nSum a = %lld\n", sum);
	printf("\nAverage a = %.2f\n", average);
	printf("\nPositive a = %d\n", positive);
	printf("\nNegative a = %d\n", negative);
	printf("\nZero = %d\n", zero);
	*/
	return 0;
	}


