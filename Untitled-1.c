#include <stdio.h>
#include <stdlib.h>
int main() {
    int s;
    printf("Введите количество допустимых чисел после запятой (s): ");
    scanf("%d", &s);
    
    int n;
    printf("Введите количество случайных чисел (n): ");
    scanf("%d", &n);

    int a, b;  
    printf("Введите верхнюю границу (a): ");
    scanf("%d", &a); 
    printf("Введите нижнюю границу (b): ");
    scanf("%d", &b);  
    printf("Введенные значения: a = %d, b = %d, n = %d\n", a, b, n);

    srand(time(NULL));  
    double sum;  
    
    for (int i = 0; i < n; i++) {
        double r = (b - a) * ((double)rand() / RAND_MAX) + a;  
        double fr = r * r;  
        double rfr = r * fr;  

        sum += rfr;

        printf("R = %.*lf\n", s, r);        
        printf("FR = %.*lf\n", s, fr);      
        printf("R * FR = %.*lf\n\n", s, rfr);  
    }
    double answer = sum / n;
    printf(" Похожее на ответ число = %.*lf\n", s, answer);
    return 0;
}
