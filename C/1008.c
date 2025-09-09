#include <stdio.h>

int main(){
    int numero, horas;
    float salariophr, salariofinal;
    
    scanf("%d %d %f", &numero,&horas,&salariophr);
    salariofinal=horas*salariophr;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salariofinal);
    return 0;
}
