#include<stdio.h>
int main(){
    int array[] = {12,7,19,26,11,6};
    int length = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    int min = array[0];
    for(int i=0; i<length; i++){
        printf("%d ", array[i]);
        if (array[i]>max)
        {
            max = array[i];
        }

        if (array[i]<min)
        {
            min = array[i];
        }
    }
    printf("\nMax number is %d \n", max);
    printf("Min number is %d \n", min);
    return 0;
}