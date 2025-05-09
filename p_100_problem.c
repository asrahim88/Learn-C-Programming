/*
    Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array of size N as input and sort the array in ascending order. It is guaranteed that the input array will contain distinct integers.
Note – It is possible to sort an array without any sorting algorithm. Hence for this problem you can’t use any sorting algorithm.
Sample Input 1: Sample Output 1:
5 1 3 5 6 17
6 1 5 3 17
Sample Input 2: Sample Output 2:
7 1 2 5 7 9 10 15
5 2 15 7 9 1 10
Hints – Check the 31st October conceptual session.
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                // Swap
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
