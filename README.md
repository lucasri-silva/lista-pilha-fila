<h1 align="center">Lista, Pilha e Fila</h1>

<p align="center">Conjunto de programas com o intuito de aplicar os conceitos de estruturas estáticas e estruturas dinâmicas de Lista, Pilha e Fila.</p>

- Compilador
                
       gcc version 9.3.0
- OS
       
       Ubuntu 20.04.2 LTS

- Executar
 
        terminal:
        ./lista-pilha-fila/
        ./make clean
        ./make
        ./make run

<h3>Problema 1: LISTAS</h3>
<h4>Problema A</h4>
<p>Neste problema foi utilizado a estrutura estática, visto que o número de elementos das listas é limitado a 100 elementos cada.</p>
<p>Procedimentos: Duas listas estáticas são criadas: ListaPar e ListaImpar. A biblioteca time.h em conjunto com a função srand foi utilizada para inserir 100 valores aleatórios entre 0 e 99 em cada lista, respeitando a condição de cada. A função concatenar recebe como parâmetros ListaPar e ListaImpar e imprime uma lista concatenada dos elementos presentes nas listas respeitando as posições de paridade de ordem crescente.</p>
Exemplo:</br>{2,10,24,88,...,20}</br>{7,21,77,13,...,63}</br>{{2,7},{10,21},{24,77},{88,13},...,{20,63}}

<h4>Problema B</h4>
<p>Neste problema foi utilizado a estrutura estática, uma vez que cada lista deve ter tamanho máximo de 3 entradas.</p>
<p>Procedimentos: Inicialmente, o usuário define o tamanho das listas do jogo. São criadas duas listas estáticas, ListaA e ListaB, de mesmo tamanho (definido pelo usuário) e com elementos aleatórios entre 1 a 13. A biblioteca time.h em conjunto com a função srand foi utilizada para inserir valores aleatórios nas listas e também para gerar o valor aleatório. A função concatenar recebe como parâmetros ListaA e ListaB e imprime uma lista concatenada dos elementos de cada lista de forma sequencial a partir de suas posições de paridade. Cada par é subtraído do valor aleatório e a lista que apresenta maior soma é declarada vencedora.<p>
Exemplo:</br>Valor aleatório: 2</br>ListaA: {8,2,10}</br>ListaB: {1,13,5}</br>Lista concatenada: {{8,1},{2,13},{10,5}}</br>Listas subtraídas do valor aleatório:</br>ListaA: {6,0,8}</br>ListaB: {-1,11,3}</br>ListaA é a vencedora. Soma final = 14.

<h4>Problema C</h4>
<p>Neste problema foi utilizado a estrutura dinâmica, já que o problema não estabelece margens para a quantidade de elementos (produtos, mercados e preços).</p>
<p>O problema consiste em criar três listas dinâmicas: ListaProduto, ListaMercado e ListaPreco. A ListaProduto armazena o nome de um produto de mercado, sua quantidade (definida como zero) e seu identificador único do tipo inteiro. A ListaMercado armazena os diferentes mercados locais em o(s) produto(s) se encontra em estoque e um identificador único para cada mercado. A ListaPreco armazena o preço de um determinado produto para um mercado específico, bem como seu identificador único (mesmo identificador da ListaProduto) e o identificador do mercado (mesmo identificador da ListaMercado) no qual se encontra em estoque. Dessa forma, relacionamos produtos vs mercado vs preço para filtrar os menores preços e, portanto, o menor custo total para determinada lista de compra realizada pelo usuário. No final são imprimidos a lista de compra, os produtos com seu respectivo menor preço e o mercado em que se encontra.</p>
<p>Inicialmente deve ser feito o cadastro do produto e o cadastro do mercado, pois para cadastrar o preço de um produto, isto é, associar o preço de um produto à um mercado, é necessário o id do produto e o id do mercado.</p>
Exemplo:</br>1. Cadastrar produto</br>CADASTRO PRODUTO</br>Entre o nome do produto: arroz</br>Entre o identificador do produto: 100</br></br>2. Cadastrar mercado</br>CADASTRO MERCADO:</br>Entre o nome do mercado: ABC</br>Entre o identificador do mercado: 1</br></br>
<p>Lembrando que o exemplo mais simples possível demanda no mínimo um produto cadastrado e no mínimo dois mercados cadastrados, logo devemos cadastrar mais um mercado.</p>
2. Cadastrar mercado</br>CADASTRO MERCADO:</br>Entre o nome do mercado: BH</br>Entre o identificador do mercado: 2</br></br>
<p>Ao associar o preço de um produto à um mercado estamos dizendo que no mercado x há o produto y com o preço z. Devemos inserir o identificador do produto usado no cadastro do produto e inserir o identificador do mercado usado no cadastro do mercado.</p>
<p>3. Cadastrar preço</br>CADASTRO PREÇO:</br>Entre o identificador do mercado: 1 (ABC)</br>Entre o identificador do produto: 100 (arroz)</br>Entre o preço do produto R$18</br></br>1. Sim</br>2. Não</br>Deseja cadastar mais preços: 1</br></br>
CADASTRO PREÇO:</br>Entre o identificador do mercado: 2 (BH)</br>Entre o identificador do produto: 100 (arroz)</br>Entre o preço do produto R$16</br></p>
<p>Em realizar compra serão listados os itens disponíveis, isto é, os produtos que foram associados à um preço e mercado. Os itens (produtos) são adicionados ao carrinho entrando o seu respectivo identificador, que é mostrado à esquerda do produto.</p> 
<p>4. Realizar compra</br>ITENS DISPONÍVEIS:</br>100 - arroz</br>Entre o n° do identificador do produto para adiciona-lo ao carrinho ou o n° zero para finalizar a compra: 100</br>arroz foi adicionado ao carrinho</p>
<p>Um mesmo item pode ser adicionado mais de uma vez ao carrinho, para isso entre novamente o seu identificador.</p>
<p>Finalizando a compra, temos:</p>
<p>CARRINHO:</br>Produto, Quantidade:</br>arroz, 1</br></br>Produto: arroz, Menor Preço R$16, Mercado: BH</br>Menor compra R$16.00</p>

<h3>Problema 2: PILHAS</h3>
<h4>Problema A</h4>
<p>O problema consiste em escrever um programa que utilize uma pilha para verificar se expressões aritméticas estão com a parentização correta. O programa deve verificar as expressões para ver se cada “abre parênteses” tem um “fecha parênteses”.</p>
<p>Exemplo:</br>Correto -> ( ( ) ) – ( ( )( ) ) –( ) ( )</br>Errado -> ( ( ) – ( ( )( ) ) – ( ) ( ).<p/>
<p>Neste problema foi utilizado a estrutura estática porque levei em consideração que a grande maioria das operações aritméticas que trabalhamos não possui substancial quantidade de parênteses. Além disso, a função parentizacao, que adiciona ao vetor os parênteses encontrados durante a varredura da equação, faz o POP de parênteses '(' da pilha quando o próximo parênteses no loop é ')'. Dessa forma, quando o padrão () é formado na comparação do elemento atual do loop com o elemento do topo da pilha ocorre o POP, fazendo com que a quantidade de posições disponíveis dentro do vetor pilha seja dinâmica ao longo da iteração.</p> 
<p>Seguindo essa linha de raciocínio, acabada a iteração se a base da pilha corresponder ao topo significa que a expressão aritmética tem parentização correta, do contrário restaram parênteses sem seu respectivo complementar.</p>
if (p->base == p->top)printf("Parentização da expressão aritmética CORRETA\n");</br>
else printf("Parentização da expressão aritmética INCORRETA\n");

<h4>Problema B:</h4>
<p>Não implementado</p>

<h4>Problema C:</h4>
<p>Neste problema foi utilizado a estrutura estática, já que é proposto uma pilha com 20 posições previamente preenchidas com números inteiros aleatórios entre 1 e 99.</p>
<p>O problema consiste em elaborar uma função totiente de Euler que percorra cada elemento da pilha e encontre para esse número os co-primos.</p>
<p>Primeiramente, vamos definir quando dois números são co-primos. Quando dois números (eles podem não ser primos) não possuem nenhum fator comum além de um entre eles, eles são chamados de co-primos ou relativamente primos. Exemplo.: 4 e 9 são co-primos.</p>
<p>Para calcularmos os co-primos de um número podemos seguir o seguinte raciocínio:
</br>Primeiro calculamos os fatores do número. Em seguida, analisamos todos os números que precedem o número em questão. Se o número analisado é multíplo de pelo menos um dos fatores do número que estamos a calcular os co-primos, então esse número não é seu co-primo</p>
<p>Exemplo:</br>
Calcular os co-primos de 21:</br>
Fatores de 21: 3 x 7</br>
Listamos os números que antecedem o número 21:</br>
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20</br>
Dentre os números acima ignoramos aqueles que são multíplos dos cofatores de 21, são eles: 3 e 7.</br>
Logo, os co-primos de 21 são:</br>
1, 2, 4, 5, 8, 10, 11, 13, 16, 17, 19, 20<p>

<p>Procedimentos:</br>
Foi criado uma função para calcular os fatores de um número. Para isso pegamos o número e o dividimos por números a partir de 2. Se há resto significa que o divisor não é fator do número em questão e o incrementamos em uma unidade. Se não há resto então o divisor é fator do número em questão, acrescentamos esse ao vetor fatores e atualizamos o número em questão pelo resultado da divisão. Fazemos essa iteração até que o número em questão seja igual a 1.</br>
Obtendo os fatores do número podemos agora percorrer todos os números anteriores ao número que se deseja obter os co-primos e os compararmos. Foi criado outro vetor com o nome de coprimos para armazena-los à medida em que forem sendo encontrados. Se o número analisado não for múltiplo de nenhum dos fatores encontrados então esse número será um co-primo. Se o número for múltiplo de pelo menos um dos fatores então break loop e passa para o sucessor. Esse processo ocorre até que o número analisado seja o número que se deseja obter os co-primos - 1.</br>
No final de cada iteração para um determinado número que se deseja saber seus co-primos é imprimido os seus fatores e co-primos. Logo após isso é feito o POP desse número da pilha. Quando p->top-1 = p->base chegamos ao fim da execução.</p>

<h3>Problema 3: FILAS</h3>
<h4>Problema A</h4>
<p>Obs.:Não consegui implementar por completo. </p>
<p>O problema consiste em usar o binômio de Newton para expandir expressões binomiais do tipo (x + y)^ĸ. Para isso serão usadas duas filas: uma armazenará expressões binomiais do tipo (x + y)^ĸ e a outra será usada para armazenar os resultados de cada expansão.</p>
<p>O usuário insere a partir da função EnfileiraBinomio(FilaBinomio *f, char x, char y, int k, char s) a função em seu formato inicial na FilaBinomio. A função binomioNewton(FilaBinomio *f) calcula a forma expandida da função armazenada na posição um da fila.</p>
<p>A função binomial(int k, int i) e a função binomioNewton(FilaBinomio *f) quebram o problema em duas partes. A binomial realiza o binômio da fórmula, enquanto que a binomioNewton faz a iteração e condições. A cada iteração é imprimido uma parcela da equação expandida.</br>
printf("(%d%c**%d.%c**%d)", binomial(k, i), x, expoenteX, y, i), onde binomial(k, i) representa o binômio da fórmula (coeficiente de x) e i o expoente de y.</p>

<h4>Problema B</h4>
<p>Não implementado</p>

<h3>Problema 4: FILA, PILHA e FILA</h3>
<p>Não implementado</p>
