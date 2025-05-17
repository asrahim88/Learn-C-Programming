/*
    Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array of size N . Now count the number of prime numbers from this array and print them.
    In the sample output the first line will contain count of prime numbers and second line will contain the prime numbers.
    Sample Input 1:                     Sample Output 1:
    5                                               2
    2 10 4 21 97                                   2 97
    Sample Input 2:                     Sample Output 2:
    6                                              3
    5 12 16 19 23 9                             5 19 23
    Hints – Nested loop
*/
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int primeCount = 0;
    int primeNumbers[n]; // এখানে প্রাইম নাম্বারগুলো রাখা হবে
    int index = 0; // primeNumbers array এর index

    for (int i = 0; i < n; i++) {
        int num = array[i];
        if (num < 2) continue; // 0 এবং 1 প্রাইম নয়

        int isPrime = 1; // ধরলাম প্রাইম
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            primeNumbers[index++] = num;
            primeCount++;
        }
    }

    // Output
    printf("%d\n", primeCount);
    for (int i = 0; i < index; i++) {
        printf("%d ", primeNumbers[i]);
    }
    printf("\n");

    return 0;
}
