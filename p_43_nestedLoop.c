#include<stdio.h>
int main(){
   int n,m;
   printf("Enter your row number: ");
   scanf("%d", &n);

   printf("Enter your column number: ");
   scanf("%d", &m);
   int i = 0; 
   while (i<n)
   {
        int j=0;
        while (j<m)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
   }
   
    return 0;
}