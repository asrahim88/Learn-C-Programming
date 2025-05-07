/*
    Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
    N as input and tell if the array contains only one unique value or not. Print “YES” or “NO”.
    Sample Input 1:                     Sample Output 1:
    5                                           NO
    2 4 2 2 4
    Sample Input 2:                     Sample Output 2:
    5                                           YES
    4 4 4 4 4
*/


#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

   int array[N];

   for (int i = 0; i <N; i++)
   {
        scanf("%d", &array[i]);
   }

   int unique = array[0];
   int flag = 0;
   for (int i = 0; i < N; i++)
   {
        if (unique != array[i])
        {
            flag++;
            break;
        }
   }
   if (flag==0)
   {
        printf("YES");
   }else {
        printf("NO");
   }
    return 0;
}