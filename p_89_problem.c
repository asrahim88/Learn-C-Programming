/*
    You will be given an positive integer N and after that an integer array of size N. Then you will be given Q which refers to queries. For each query you will be given i and v where i refers to the index and v to value. You need to
    add the value to that index. After all of the queries print the values
    Sample Input:                           Sample Output:
    5                                          11 2 8 4 10
    1 2 3 4 5
    3
    0 10
    2 5
    4 5
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

   int Q;
   scanf("%d", &Q);

   for (int i = 0; i < Q; i++)
   {
        int i, v;
        scanf("%d %d", &i, &v);
        array[i]+= v;
   }
   
   for (int i = 0; i <N; i++)
   {
        printf("%d ", array[i]);
   }
    
    return 0;
}