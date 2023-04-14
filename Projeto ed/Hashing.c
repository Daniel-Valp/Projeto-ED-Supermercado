#include "hashing.h"

// Função para criar uma nova tabela hash
tabela_hash *criarTabelaHash(int tamanho)
{
}

// Função para destruir uma tabela hash e liberar a memória alocada
void destruirTabelaHash(tabela_hash *tabela)
{
}

// Função para calcular o hash de um número de cliente
int calcularIndiceHash(int numero_cliente, int tamanho)
{
};

// Função para obter um cliente a partir do seu número de cliente usando tabela de hash
cliente *hashing_obter_cliente(tabela_hash *tabela, int numero_cliente)
{
}

// Função para calcular o hash de um número de cliente
cliente* buscarClienteTabelaHash(tabela_hash *tabela, int num_cartao) {

}

// Função para inserir um novo cliente na tabela hash de clientes
void hashing_inserir_cliente(tabela_hash *tabela, cliente *novo_cliente)
{
}

// Função para remover um cliente da tabela hash de clientes
void hashing_remover_cliente(tabela_hash *tabela, int numero_cliente)
{
}