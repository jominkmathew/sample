#include <stdio.h>

void main() {
  int values[7];

  printf("Enter 7 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 7; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 7; ++i) {
     printf("%d\n", values[i]);
  }
}
 