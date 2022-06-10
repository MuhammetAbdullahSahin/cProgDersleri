#include <stdio.h>

int main()
{
  int alt, ust, i;
  printf("Alt değer veriniz: ");
  scanf("%d", &alt);

  printf("Ust değer veriniz: ");
  scanf("%d", &ust);
  
  for(i = alt ; i <= ust ; i++)
    printf ("%d ", i);

  return 0;
  
}