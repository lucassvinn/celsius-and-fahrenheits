#include <stdio.h>

int main()
{
    int celsius;
    int transf;
    
    printf("Digite a temperatura em celsius: ");
    scanf("%d", &celsius);
    
    transf = ((celsius * 9)) / 5 + 32;
    
    printf("O valor em Farenheits é de: %d", transf);
    
    

    return 0;
}
