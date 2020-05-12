#include<iostream>
#include <stdio.h>

using namespace std;

int g_a = 1;
int g_b = 2; 
int g_c = 3; 
void zadan1(int *gptr, int *lptr, int value) {
	int* dptr = new int;
	*dptr = value;
	*gptr = value;
	*lptr = value;
	printf("%10p %10p %10p\n", gptr, lptr, dptr);
}

int main(int argc, char** argv) {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	printf("%10s %10s %10s\n", "Global", "Local", "Dynamic");
	
	int l_a, l_b, l_c;
	zadan1(&g_a, &l_a, a);
	zadan1(&g_b, &l_b, b);
	zadan1(&g_c, &l_c, c);
	return 0;
}
