//homework 1 Michael Ye
#include <stdio.h>
int main() {
	//problem 1
	int i;
	int sum = 0;
	for(i = 1 ; i < 1000 ; i++)
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	printf("answer to 1: %d\n", sum);

	//problem 2
	int f1 = 1, f2 = 1, f3 = 0, su = 0;
	while(f3 < 4000000) {
		f3 = f1 + f2;
		if(f3 % 2 == 0)
			su += f3;
		f1 = f2;
		f2 = f3;
	}
	printf("answer to 2: %d\n", su);

	//problem 5
	int a = 0;
	int divBool = 0;
	while(divBool == 0) {
		a += 1;
		int d;
		for(d = 1 ; d < 21 ; d++)
			if(a % d != 0) {
				divBool = 0;
				break;
			}
			else
				divBool = 1;
	}
	printf("answer to 5: %d\n", a);


	//problem 6
	int sus = 0, sqs = 0;
	int b;
	for(b = 1 ; b < 101 ; b++) {
		sus += b * b;
		sqs += b;
	}
	printf("answer to 6: %d\n", sqs * sqs - sus);
	return 0;
}
