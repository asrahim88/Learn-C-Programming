/*
    Write a C program to take one positive integer N, the size of an array of unique values as input. Then take an integer array of size N as input. After that take another integer target. You need to tell if you can make target by adding any two different values from that array. Hint: Use nested loop
    Sample Input:                           Sample Output:
    5                                           YES
    2 4 3 6 8
    7
    Sample Input: Sample Output:
    5                                           NO
    2 4 3 1 8
    8
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

   int t;
   scanf("%d", &t);

   int flag = 0;
   for (int i = 0; i < N; i++)
   {
    for (int j = 1; j <=N; j++)
    {
        if (array[i]+array[j] == t && array[i] !=array[j])
        {
            flag++;
            break;
        }
    }
   }
   if (flag==0)
   {
        printf("NO");
   }else {
        printf("YES");
   }
    return 0;
}