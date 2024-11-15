 // Exercícios práticos usando Arduino e conceitos de estrutura de repetição

1) int cameraData[10];

2) Função do código cameraData[3] = analogRead(A1);: Esse código lê o valor analógico do pino A1 e armazena o resultado no quarto elemento do vetor cameraData. O índice [3] representa a quarta posição do vetor, pois a contagem começa do zero.

3) float temperaturas[] = {25.5, 26.0, 24.8, 27.3, 26.5};

4) for (int i = 0; i < 4; i++) {
    Serial.println(ledPins[i]);
}

5) int ledPins[] = {2, 3, 4, 5}; // Exemplo de valores
void setup() {
    Serial.begin(9600);
}
void loop() {
    for (int i = 0; i < 4; i++) {
        Serial.println(ledPins[i]);
    }
    delay(1000); // Evita sobrecarga no monitor serial
}


6) int randomValues[5];
for (int i = 0; i < 5; i++) {
    randomValues[i] = random(0, 101); // Gera valores entre 0 e 100
}


7) for (int i = 0; i < tamanhoVetor; i++) {
    if (sensorReadings[i] == 150) {
        break;
    }
}


8) Função da instrução sizeof(sensorData) / sizeof(sensorData[0]): Esse comando calcula o número de elementos no vetor sensorData. sizeof(sensorData) retorna o tamanho total do vetor em bytes, enquanto sizeof(sensorData[0]) retorna o tamanho do primeiro elemento do vetor em bytes. Dividindo um pelo outro, obtém-se a quantidade de elementos no vetor.
