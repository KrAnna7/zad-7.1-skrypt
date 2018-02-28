#include <stdio.h>
typedef struct {
	float a,b,c;
} Trojkat;

float fun(Trojkat T1){
	float Obwod;
	Obwod=T1.a + T1.b + T1.c;
	return Obwod;
}

int main() {
	Trojkat T1;
	T1.a=2.4;
	T1.b=3.7;
	T1.c=4.5;
	printf("%f",fun(T1));
	return 0;
}
