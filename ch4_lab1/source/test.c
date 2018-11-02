#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	char a[6];
	int c;
	srand(time(NULL));

	c = rand() % 6;
	printf("%d", c);



	system("pause");
	return 0;
}