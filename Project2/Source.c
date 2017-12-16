#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void grnToDolar() {
	printf("\nGRN:");
	double dolar = 0.037;
	int input_grn;
	if (scanf_s("%d", &input_grn)) {    //выход по нажатию буквы или кнопки питания на компьютере.
		printf("%f", input_grn * dolar);
		grnToDolar();// рекурсия! я знаю такое слово!
	}
	else {
		return 0;
	}
}
void dolarToGrn() {
	printf("\nUSD:");
	double grn = 27.1;
	int input_usd;


	if (scanf_s("%d", &input_usd)) { 
		printf("%f", input_usd * grn);
		dolarToGrn();
	}
	else {
		return 0;
	}
}
void main() {
	printf("1 - grn to usd \n2 - usd to grn\n");
	int mode;
	scanf_s("%d", &mode);
	if (mode == 1) {
			grnToDolar();
	}
	if (mode == 2) {
			dolarToGrn();
	}
	system("pause");
	return 0;

}