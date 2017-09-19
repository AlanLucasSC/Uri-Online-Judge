#include<stdio.h>

int main()
{
  int A[24], B[24], loop, i, j, cont = 0, aux;
  //Vetor A -> Ordem de grid de largada
  //Vetor B -> Ordem de grid de chegada
  //Aux -> Ajudar na troca de numeros
  while( scanf("%d", &loop) != EOF)
  {
    for(i = 0; i < loop; i++)
    {
      scanf("%d", &A[i]);
    }
    for(i = 0; i < loop; i++)
    {
      scanf("%d", &B[i]);
    }
    for (i = 0; i < loop; i++)
    {
      j = i;
      if(B[i] != A[i])
      {
        while(B[i] != A[j])
        {
          j++;
        }
        cont = cont + (j - i);
        while(j != i)
        {
          aux = A[j - 1];
          A[j - 1] = A[j];
          A[j] = aux;
          j--;
        }
      }
    }
    printf("%d\n", cont);
    cont = 0;
  }

  return 0;
}