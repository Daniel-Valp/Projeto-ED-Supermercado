#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar o Hipermercado
typedef struct {
    char nome_hipermercado[50];
    int numero_caixas;
    int numero_funcionarios;
    int numero_produtos;
    int numero_clientes;
} hipermercado;

// Estrutura para representar um Produto
typedef struct {
    int codigo_produto;
    char nome_produto[50];
    float preco;
    int tcompra;
    int tcaixa;

} produto;

// Estrutura para representar um produto comprado por um cliente
typedef struct {
    int numero_cliente;
    char nome_cliente[50];
    produto *produtos_comprados; // lista de produtos comprados
    int tempo_total; // tempo total gasto pelo cliente

} cliente;

//estrutura para representar um funcionario
typedef struct  {
    int numero_funcionario;
    char nome_funcionario[50];
} funcionario;

// Estrutura para representar uma caixa
typedef struct {
    int numero_caixa;
    char descricao[50];
    int tempo_atendimento;
    fila_cliente fila; // fila de clientes na caixa
} caixa;

//-------------------------------------------------------------------------------------------//

//Lista de clientes
typedef struct lista_cliente{
    ELEMENTO_CLIENTE* Inicio;
    ELEMENTO_CLIENTE* Fim;
    int NEL;

} LISTA_CLIENTE;

//Lista de caixas
typedef struct lista_caixa{
    ELEMENTO_CAIXA *Inicio;
    ELEMENTO_CAIXA *Fim;
    int NEL;
} LISTA_CAIXA;

//Lista funcionarios
typedef struct lista_funcionario{
    FUNCIONARIO* Inicio;
    FUNCIONARIO* Fim;
    int NEL;
} LISTA_FUNCIONARIO;

//Lista de produtos
typedef struct lista_produto{
    PRODUTO* Inicio;
    PRODUTO* Fim;
    int NEL;
} LISTA_PRODUTO;

///////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct elemento_cliente{
    CLIENTE *info;
    struct elemento_cliente *Prox;
}ELEMENTO_CLIENTE, *ptElemento_Cliente;

//Elemento do funcionario
typedef struct elemento_funcionario{
    FUNCIONARIO *info;
    struct elemento_funcionario *Prox;
}ELEMENTO_FUNCIONARIO, *ptElemento_Funcionario;

//Elemento do produto
typedef struct elemento_produto{
    PRODUTO *info;
    struct elemento_produto *Prox;
}ELEMENTO_PRODUTO, *ptElemento_Produto;

//Elemento do Caixa
typedef struct elemento_caixa{
    CAIXA *info;
    struct elemento_caixa *Prox;
}ELEMENTO_CAIXA, *ptElemento_Caixa;

//Funçao para tirar o nome e numero de funcionarios para a estrutura
void carrega_funcionarios(funcionario *funcionarios, int tamanho, char *nome_arquivo);

//Funçao para tirar o nome e numero de clientes para a estrutura
void carrega_clientes(cliente *clientes, int tamanho, char *nome_arquivo);

//Funçao para tirar o nome, preço e tempos dos produtos
void carrega_produtos(produto *produtos, int tamanho, char *nome_arquivo);