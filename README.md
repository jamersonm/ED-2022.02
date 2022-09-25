# ED_2022.02
Material produzido na disciplina de Estrutura de Dados  

### 1. Modularização
 - Corresponde a particionação do código em rotinas que executam uma
determinada tarefa ou cálculo, de forma que pode ser
entendido (e escrito) de forma independente do problema
maior que ajuda a resolver.
```
ESTRUTURA  
   
<tipo de retorno> <nome> ( <parâmetros> )  
  <comandos>  
  ...
  return <expressão>
```

### 2. Vetores
- Uma variável composta homogênea unidimensional;
- Formada por uma sequência de variáveis do mesmo tipo;
- Seu conteúdo é alocado sequencialmente na memória.
```
DECLARAÇÃO

<tipo> <nome>[<tamanho do vetor>]
```
NOTA: para implementação, o índicie inicia em zero.  

### 3. Matrizes
- Semelhantemente a vetores, porém multidimensional.
```
DECLARAÇÃO

<tipo> <nome>[ <tamanho da dimensão> ][ <tamanho da dimensão ]
```
NOTA: posse declarar uma matriz de n dimensões.  

### 4. Templates
- Característica atribuída a uma função ou a uma classe que lhe permita trabalhar com tipos genéricos.
- O tipo que será utilizado em uma função/classe template é definida na chamada.
```
template <class T>
<função/classe>

