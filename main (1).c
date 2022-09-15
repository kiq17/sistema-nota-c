#include <stdio.h>

int notas[] = {8,5,6,2,3,10,8,9,3,0};
int tam = sizeof(notas) / sizeof(int) - 1;

int menu();
int opcao;
int opcoes();

int main()
{
    menu();

    return 0;
}


int menu(){
    printf("1 - Média da turma \n");
    printf("2 - Maior Nota \n");
    printf("3 - Menor Nota \n");
    printf("4 - Quantidade de notas maior que 6 \n");
    printf("5 - Finalizar programa \n");
    scanf("%d", &opcao);
    
    if(opcao == 5){
        printf("Sistema encerrado");
    } else{
        opcoes();
    }
}

int opcoes(){
    int total = 0;
    int i;
    int resultado;
    
    if(opcao == 1){
        for(i=0; i < tam; i++){
            total += notas[i];
        }

        resultado = total / tam;

        printf("Média da turma: ");
        printf("%d \n", resultado);
        
        menu();
                
    } else if (opcao == 2){
        int max = notas[0];
    
        for(i=0; i < tam; i++){
            if(notas[i] > max){
                max = notas[i];
            }
        }
        
        printf("Maior nota: ");
        printf("%d \n", max);
        menu();
        
    } else if (opcao == 3){
        
    } else if (opcao == 4){
        
    } else if(opcao == 5){
        
    } else{
        printf("Opção inválida. \n");
        menu();
    }
}

