#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Input the value of n: \n");
    scanf("%d", &n);
    double sum = 0.0;
    for(int i=1; i<=n; i++){
        double mul = 1.0;
        for(int j=1; j<=i; j++){
            mul *= (j+1)*(sin(j));
        }
        sum += (i*(i+1))/mul;
        
    }
    printf("%lf", sum);
    return 0;
}
