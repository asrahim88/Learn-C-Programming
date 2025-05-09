/*
    Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array of size N . And next line will contain k . Now find the k-th smallest element from the array.
Sample Input:                               Sample Output:
6                                                   6
6 25 1 4 9 17
3
Explanation – For the above test case k=3 means you need to find the 3rd smallest element from the array
*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i] > array[j]) {
                // Swap
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        
    }
    
    int k;
    scanf("%d", &k);

    printf("%d", array[k-1]);
    return 0;
}

