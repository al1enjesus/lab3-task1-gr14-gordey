/* hello.c */
#include <stdio.h>
#include <stdlib.h>


int digits_sum(int element) {
  char str[80];
  sprintf(str, "%d", element);

  int sum_digits = 0;
  for (int i = 0; str[i] != '\0'; i++){
    sum_digits += str[i] - '0';
  }
    
  return sum_digits;
}

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int main ()
{

  int n = 10;
  int* arr = (int*) malloc(sizeof(int) * n);

  printf("ARRAY:\n[");
  for (int i = 0; i < n; i++) {
    arr[i] = rand();
    printf("%d", arr[i]);
    if (i != n - 1) printf(", ");
    else printf("]\n");
  }
  
  int max_digits_sum=-1;
  for (int i = 0; i < n; i++) {
    max_digits_sum = max(max_digits_sum, digits_sum(arr[i]));
  }

  printf("Max digits sum: %d\n", max_digits_sum);
  
	printf ("Hello World\n");
	printf ("Goodbye World\n");
}
