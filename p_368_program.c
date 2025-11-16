#include<stdio.h>
int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);

    long long int a[n];
    for(long long int i = 0; i<n; i++) {
        scanf("%lld", &a[i]);
    }

    long long int sum = 0;
    for(long long int i =0; i<n; i++) {
        for (long long int j = i+1; j < n; j++)
        {
            if(a[i]>a[j])
            {
                long long int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    
    for(long long int i=n-1; i>=n-k; i--) {
        if(a[i]>0){
            sum += a[i];
        }
    }
    
    printf("%lld", sum);
    

    return 0;
}