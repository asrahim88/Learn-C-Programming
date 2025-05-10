#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

  for (int row = 1; row <=n; row++)
  {
    for (int column = 1; column < n-row; column++)
    {
        printf(" ");
    }

    for (int column = 1; column <=row; column++)
    {
        printf("%d",row);
    }
    printf("\n");
  }
  
  for (int row = n-1; row >=1; row--)
  {
    for (int column = 1; column < n-row; column++)
    {
        printf(" ");
    }

    for (int column = 1; column <=row; column++)
    {
        printf("%d",row);
    }
    printf("\n");
  }
  

    return 0;
}