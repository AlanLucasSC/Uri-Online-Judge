#include <stdio.h>

int main()
{
  int A, i = 0;
  scanf("%d", &A);
  while(A != 0)
  {
    i++;
    printf("Teste %d\n%d %d %d %d\n\n", i, A/50, (A%50)/10, ((A%50)%10)/5, (((A%50)%10)%5)/1);
    scanf("%d", &A);
  }
  return 0;
}