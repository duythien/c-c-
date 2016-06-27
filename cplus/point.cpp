#include <string>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int number = 1;

	int *pointNUmber = &number;


	cout << pointNUmber << endl;


	cout << *pointNUmber << endl;


	return 0;
}