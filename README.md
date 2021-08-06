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
