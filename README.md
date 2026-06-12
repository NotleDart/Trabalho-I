# Trabalho-I
# Organizador Pessoal

## Descrição

Este trabalho foi realizado para a disciplina de Estrutura de Dados I.

O programa funciona como um organizador pessoal, permitindo ao usuário cadastrar e gerenciar:

* Lista de tarefas
* Lista de supermercado
* Lista de contatos

Para armazenar os dados foi utilizada a estrutura de dados Lista Simples Encadeada Dinâmica.

---

## Funções do Programa

Cada lista possui as seguintes operações:

* Inserir elemento no início
* Inserir elemento no fim
* Remover elemento
* Exibir todos os elementos da lista

O usuário pode escolher qual lista deseja alterar através das opções exibidas no menu.

---

## Estrutura dos Arquivos

### lista.h

Arquivo responsável pela declaração da estrutura do nó e dos protótipos das funções.

### lista.c

Arquivo responsável pela implementação das operações da lista encadeada.

### main.c

Arquivo principal do programa, contendo os menus e a interação com o usuário.

---

## Estrutura Utilizada

Foi utilizada uma Lista Simples de Encadeamento Dinâmico.

Cada nó da lista possui:

* Um campo para armazenar a informação
* Um ponteiro para o próximo nó

---

## Compilação

gcc main.c lista.c -o organizador

---

## Execução

./organizador

---


Aluno: Elton Duarte dos Santos Júnior

Disciplina: Estrutura de Dados I





