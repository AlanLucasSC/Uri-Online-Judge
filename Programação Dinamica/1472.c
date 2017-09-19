#include <stdio.h>
#include <algorithm>

int main()
{
  int N, n[100000], i, j, cont, aju, total, Total, loop;
  while(scanf("%d", &N) != EOF)
  {
    i = 0;
    scanf("%d", &n[i]);
    cont = n[i];
    for(i = 1; i < N; i++)
    {
      scanf("%d", &n[i]);
      cont = cont + n[i];
      n[i] += n[i - 1];
    }
    cont = cont / 3;
    for(i = 0; i < N; i++)
    {
      if(std::binary_search (n, n + N, n[i] + cont)  && std::binary_search (n, n + N, n[i] + (cont * 2)))
        Total++;
    }

    printf("%d\n", Total);
    Total = 0;
  }
  return 0;
}