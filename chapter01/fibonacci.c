#include <stdio.h>

	
long long int fibonacci()
{
	static long long int first = 0;
	static long long int second = 1;

	//long long int three = 3;
	static _Thread_local int counter;

	long long int out = first + second;

	first = second;

	second = out;

	return out;
}



int main(int argc, char const *argv[])
{
	for (int i = 0; i < 50; ++i) {
		
		printf("%lli\n", fibonacci());
	}
	//printf("%f\n", three);
	return 0;
}
