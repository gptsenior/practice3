#include <stdio.h>
#include <math.h>


long long count_numbers(int p) {
    
    long long total_numbers = (long long)pow(2, p);

    int exclude_count = (p - 2);

    long long result = total_numbers - exclude_count;

    return result;
}

int main() {
    int p;

    printf("Введіть кількість розрядів p (p ≤ 30): ");
    scanf("%d", &p);

    if (p > 30) {
        printf("Помилка: значення p має бути не більше 30.\n");
        return 1;
    }

    long long result = count_numbers(p);
    printf("Кількість чисел з %d розрядів, де три однакові цифри не стоять поруч: %lld\n", p, result);

    return 0;
}
