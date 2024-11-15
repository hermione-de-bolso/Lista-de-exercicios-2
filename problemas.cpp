// 4.Problemas

a) Interpretação dos dados da primeira linha da matriz ambientData em relação à temperatura
A primeira linha da matriz ambientData contém os valores {22, 25, 23, 21, 24}, 
que representam as temperaturas registradas em graus Celsius no Local 1 em cinco momentos diferentes. 
Esses valores podem indicar variações de temperatura ao longo do tempo, permitindo observar tendências como aumentos ou quedas na temperatura neste local.


b) Média da umidade do solo nos cinco momentos registrados no segundo local de monitoramento
Para calcular a média da umidade do solo registrada na segunda linha da matriz, somamos os valores {45, 38, 42, 40, 37} e dividimos pelo número de leituras (5).

Cálculo: int ambientData[3][5] = {
    {22, 25, 23, 21, 24},
    {45, 38, 42, 40, 37},
    {400, 380, 420, 410, 390}
};

void setup() {
    Serial.begin(9600);
    
    int totalLeituras = 5;
    int somaUmidade = 0;

    // Somando os valores de umidade na segunda linha (índice 1)
    for (int j = 0; j < totalLeituras; j++) {
        somaUmidade += ambientData[1][j];
    }

    // Calculando a média
    float mediaUmidade = (float)somaUmidade / totalLeituras;

    // Exibindo a média no monitor serial
    Serial.print("Media de umidade do solo no segundo local: ");
    Serial.println(mediaUmidade);
}

void loop() {
    // O loop está vazio porque o cálculo é feito apenas uma vez no setup
}
Resposta: A média da umidade do solo nos cinco momentos registrados no segundo local de monitoramento é 40.4%.


c)) Momento em que a concentração de CO₂ atingiu seu valor máximo no terceiro local de monitoramento
Na terceira linha da matriz ambientData, que representa a concentração de CO₂ em ppm no terceiro local, os valores são {400, 380, 420, 410, 390}.

Valor máximo: O valor máximo é 420. Índice do valor máximo: Esse valor ocorre na terceira posição (índice 2).

Resposta: A concentração de CO₂ atingiu seu valor máximo no terceiro momento registrado no terceiro local de monitoramento.


d) 
int ambientData[3][5] = {
    {22, 25, 23, 21, 24},
    {45, 38, 42, 40, 37},
    {400, 380, 420, 410, 390}
};

int totalLocais = 3;
int totalLeituras = 5;
int somaTemperaturas = 0;
int contagemTemperaturas = 0;

for (int i = 0; i < totalLocais; i++) {
    for (int j = 0; j < totalLeituras; j++) {
        if (i == 0) {  
            somaTemperaturas += ambientData[i][j];
            contagemTemperaturas++;
        }
    }
}

float mediaTemperatura = (float)somaTemperaturas / contagemTemperaturas;
Serial.begin(9600);
Serial.print("Media de temperatura em todos os locais monitorados: ");
Serial.println(mediaTemperatura);
