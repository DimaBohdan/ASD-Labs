#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Input the value of n: \n");
    scanf("%d", &n);
    
    double sum = 0.0;
    double previous_mul = 1.0;  // Для збереження попереднього значення mul

    for(int i = 1; i <= n; i++) {
        // Оновлюємо значення mul з використанням попереднього значення
        previous_mul *= (i + 1) * sin(i);
        
        // Обчислюємо поточний член суми
        double term = (i * (i + 1)) / previous_mul;
        sum += term;
    }

    printf("%lf\n", sum);
    return 0;
}
