#include <stdio.h>

void main() {
    int qtde_item = 0;

    printf("Digite a quantidade de itens que deseja inserir:\n");
    scanf("%d", &qtde_item);

    int id[qtde_item];
    char nome[qtde_item][100]; 
    float val_unitario[qtde_item];
    int qtde[qtde_item];
    float total_item[qtde_item];
    float total_venda = 0;

    for (int i = 0; i < qtde_item; i++) {
        int codigo_valido = 0;
        while (!codigo_valido) {
            codigo_valido = 1;
        printf("Digite o codigo do item:\n");
        scanf("%d", &id[i]);
        
        for (int j = 0; j < i; j++) {
                if (id[i] == id[j]) {
                    printf("Código já inserido. Por favor, insira um código diferente.\n");
                    codigo_valido = 0;
                    break;
                }
            }
        }
        printf("Digite o nome do item:\n");
        scanf("%s", nome[i]);
        printf("Digite o valor unitário do item:\n");
        scanf("%f", &val_unitario[i]);
        printf("Digite a quantidade do item:\n");
        scanf("%d", &qtde[i]);
        total_item[i] = val_unitario[i] * qtde[i];
        total_venda += total_item[i];
    }
    printf("\nCODIGO  NOME QTDE  UNIT TOTAL\n");
    for (int i = 0; i < qtde_item; i++) {
        printf("%d    %s    %d    %.2f    %.2f\n", id[i], nome[i], qtde[i], val_unitario[i], total_item[i]);
    }
    
    printf("Valor total da venda %2.f",total_venda);
}
