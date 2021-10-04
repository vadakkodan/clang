// Write a program to delete a specific element from an array and rearrange the
// elements.
#include <stdio.h>
#include <stdlib.h>
void main() {
  int Num[20] = {0}, j, k, n, p, t;
  // clrscr();
  printf("\n Enter Number of elements:");
  scanf("%d", &n);

  printf("\n Enter elements:");
  for (j = 0; j < n; j++)
    scanf("%d", &Num[j]);

  printf("\n Elements are:");
  for (j = 0; j < n; j++)
    printf("\n Num[j]=%d", Num[j]);

  printf("\n Enter element number to delete:");
  scanf("%d", &p);
  p--;

  for (j = 0; j < n; j++) {
    if (j >= p)
      Num[j] = Num[j + 1];
  }

  for (j = 0; j < n; j++)
    if (Num[j] != 0)
      printf("\nNum[j] = %d", Num[j]);
}
