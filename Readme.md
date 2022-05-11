# Exercicio 4

<div>
    <h2> Em uma lista A temos um conjunto de elementos inteiros positivos ou não 〈a1, a2, . . . , an〉. Elabore uma função que consiga encontrar neste conjunto a máxima soma.</h2>
</div>

# Solução
<div>
    <p>O programa começa pedindo para o usuário digitar números para adicionar em uma Lista ao chegar no tamanho máximo da Lista definido pelo MAXTAM em 'lista.h' o programa começa sua execução de verificar a máxima soma onde ele percorre toda a lista verificando qual é a máxima soma sequencialmente obtida pelo que foi digitado pelo usuário</p>
</div>


# Compilação e Execução

A lista dinâmica disponibilizada possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:

| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
