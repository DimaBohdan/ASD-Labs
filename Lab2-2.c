#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Input the value of n: \n");
    scanf("%d", &n);
    
    double sum = 0;
    double mul = 1; 
    for(int i = 1; i <= n; i++) {
        mul *= (i + 1) * sin(i);
        double elem = (i * (i + 1)) / mul;
        sum += term;
    }

    printf("%lf\n", sum);
    return 0;
}
