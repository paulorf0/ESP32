# 🚀 ESP32 Binary Counter

![Protótipo SimulIDE](assets/Prototype%20-%20SimulIDE.png)

Um projeto elegante e funcional de um **Contador Binário de 3 bits** utilizando o **ESP32**. Este projeto demonstra conceitos fundamentais de eletrônica digital, manipulação de bits (Bitwise operations) e controle de periféricos com o framework Arduino.

## 📋 Sobre o Projeto

O objetivo deste projeto é fornecer uma interface física simples para contar de 0 a 7, representando o valor em formato binário através de 3 LEDs. 

### ✨ Funcionalidades
- **Contagem Crescente/Decrescente**: Dois botões dedicados para incrementar e decrementar o valor.
- **Visualização Binária**: 3 LEDs que representam o estado atual do contador (000 a 111).
- **Tratamento de Debounce e Concorrência**: Lógica implementada para evitar conflitos quando ambos os botões são pressionados simultaneamente.
- **Saída Serial**: Monitoramento em tempo real dos estados dos botões para depuração.

## 🛠️ Tecnologias e Ferramentas

- **Hardware**: ESP32 (NodeMCU).
- **Linguagem**: C++ (Framework Arduino).
- **Ambiente de Desenvolvimento**: PlatformIO.
- **Simulação**: SimulIDE (para validação do protótipo).

## 💡 Demonstração

Veja o projeto em funcionamento:

<p align="center">
  <img src="assets/gif.gif" alt="Demonstração do Contador" width="600px">
</p>

## 🔧 Estrutura do Código

O coração do projeto utiliza operações de deslocamento de bits para acionar os LEDs de forma eficiente:

```cpp
void active_led() {
    for (int i = 0; i < 3; i++) {
        int status = LED_Status >> i; // Desloca para isolar o bit correspondente
        status &= 1;                  // Máscara para pegar o valor do bit

        digitalWrite(LEDS_PORT[i], status ? HIGH : LOW);
    }
}
```

## 🚀 Como Executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/paulorf0/counter-esp32.git
   ```
2. Abra o projeto no **VS Code** com a extensão **PlatformIO** instalada.
3. Conecte seu ESP32 e clique em **Upload**.
4. Abra o Monitor Serial (115200 baud) para acompanhar o status.

---
Código por [Paulo Ferlin](https://github.com/paulorf0)
