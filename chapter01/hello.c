#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	printf("The integral of a normal(0,1) distribution "
		" between -19.5 to 1.96 is:%g\n", erf(1.96*sqrt(1/2)));
	return 0;
}
