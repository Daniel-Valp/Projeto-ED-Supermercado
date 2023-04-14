#include "fila.h"

void carrega_funcionarios(funcionario *funcionarios, int tamanho, char *nome_arquivo) {
    FILE *arquivo;
    arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    for (int i = 0; i < tamanho; i++) {
        fscanf(arquivo, "%d %s", &(funcionarios[i].numero_funcionario), funcionarios[i].nome_funcionario);
    }
    fclose(arquivo);
}

LISTA_CLIENTE *CriarListaCliente(){
    LISTA_CLIENTE *LCL = (LISTA_CLIENTE *)malloc(sizeof(LISTA_CLIENTE));
    LCL->Inicio = NULL;
    LCL->NEL = 0;
    return LCL;
}

LISTA_CAIXA *CriarListaCaixa(){
    LISTA_CAIXA *LC = (LISTA_CAIXA *)malloc(sizeof(LISTA_CAIXA));
    LC->Inicio = NULL;
    LC->NEL = 0;
    return LC;
}

LISTA_FUNCIONARIO *CriarListaFuncionario(){
    LISTA_FUNCIONARIO *LF = (LISTA_FUNCIONARIO *)malloc(sizeof(LISTA_FUNCIONARIO));
    LF->Inicio = NULL;
    LF->NEL = 0;
    return LF;
}

LISTA_PRODUTO *CriarListaProduto(){
    LISTA_PRODUTO *LP = (LISTA_PRODUTO *)malloc(sizeof(LISTA_PRODUTO));
    LP->Inicio = NULL;
    LP->NEL = 0;
    return LP;
}

ELEMENTO_CLIENTE *CriarElementoCliente(cliente *cli){
    ELEMENTO_CLIENTE *ECL = (ELEMENTO_CLIENTE *)malloc(sizeof(ELEMENTO_CLIENTE));
    ECL->info = cli;
    ECL->Prox = NULL;
    return ECL;
}

ELEMENTO_CAIXA *CriarElementoCaixa(caixa *ca){
    ELEMENTO_CAIXA *EC = (ELEMENTO_CAIXA *)malloc(sizeof(ELEMENTO_CAIXA));
    EC->info = ca;
    EC->Prox = NULL;
    return EC;
}

ELEMENTO_FUNCIONARIO *CriarElementoFuncionario(funcionario *fu){
    ELEMENTO_FUNCIONARIO *EF = (ELEMENTO_FUNCIONARIO *)malloc(sizeof(ELEMENTO_FUNCIONARIO));
    EF->info = fu;
    EF->Prox = NULL;
    return EF;
}

ELEMENTO_PRODUTO *CriarElementoProduto(produto *PO){
    ELEMENTO_PRODUTO *EP = (ELEMENTO_PRODUTO *)malloc(sizeof(ELEMENTO_PRODUTO));
    EP->info = PO;
    EP->Prox = NULL;
    return EP;
}

