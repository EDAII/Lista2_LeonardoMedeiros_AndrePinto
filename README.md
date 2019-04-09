# Analise de desempenho de diferentes metodos de ordenação

1º Exercício Prático - Estrutura de Dados 2 - 2019.1 - UnB - Gama
=========================
André Lucas de Sousa Pinto - 17/0068251
Leonardo de Araujo Medeiros - 17/0038891

## Instalação

O projeto tem duas etapas:

### Geração de Dados
1. Faça o clone deste projeto com ```$ git clone https://github.com/EDAII/Lista2_LeonardoMedeiros_AndrePinto.git ```
2. Acesse a pasta do projeto via terminal
3. Execute os seguintes comandos ``` $ g++ main.cpp -o prog -std=c++11 ```
4. Rode a aplicação com ``` $ ./prog``` 

OBS: Esta aplicação pode demorar cerca de 2 horas.

### Geração dos Gráficos
1. Ainda na pasta do projeto e no mesmo terminal execute os seguintes comandos ```$ python3 graphs.py ```

OBS: Necessário instalar o [matplotlib](https://matplotlib.org/index.html).

## Ideia proposta
O programa executa os algoritmos propostos sobre um vetor de elementos aleatórios, variando seu tamanho de 0 a 10000 elementos, para então salvar estes dados em um arquivo e posteriormente compara-los via gráficos.

## Resultados
O seguinte gráfico mostra detalhadamente os resultados obtidos:

![all](https://github.com/EDAII/Lista2_LeonardoMedeiros_AndrePinto/blob/master/all_graphs.png)

Devido a grande diferença entre os algoritmos shell, que são mais rápidos, houve a separação em dois outros gráficos, melhorando a qualidade visual

Algoritmos mais lentos:

![lentos](https://github.com/EDAII/Lista2_LeonardoMedeiros_AndrePinto/blob/master/insertion_bubble_select.png) 


Algoritmos mais rápidos:

![rapidos](https://github.com/EDAII/Lista2_LeonardoMedeiros_AndrePinto/blob/master/shells.png)
