#include <stdio.h>

int main(){
    int n, i;
    float num[100], sum = 0.0, average;

    printf("How many numbers are you entering? ");
    scanf("%d", &n);

    for(i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &num[i]);

if (n > 0) {
        sum += num[i];
    }
}

    average = sum / n;
    printf("Average = %.2f", average);

    return 0;
}
