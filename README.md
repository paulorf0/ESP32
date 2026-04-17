# 🚀 ESP32 Learning Journey

Bem-vindo ao meu repositório dedicado ao aprendizado do **ESP32**! Aqui você encontrará diversos projetos, experimentos e anotações que estou desenvolvendo enquanto exploro o vasto mundo da Internet das Coisas (IoT), sistemas embarcados e eletrônica digital.

<p align="center">
  <img src="https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExM2Z5eHdqY2Y2eGZ4Z3RxeHlwZ3F4eHdxeHlwZ3F4eHdxeHlwZ3F4eHdxeHlwZ3F4eHdxeHlwZ3F4eHdxeHlwZ3F4eHdxeHlwZyZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/3o7TKDkDbIDJieKbVm/giphy.gif" alt="ESP32 Hacking" width="600px">
</p>

---

## 🌟 O que é este repositório?

Este espaço serve como meu laboratório pessoal. Cada projeto é uma etapa na minha jornada para dominar o ESP32, focando em conceitos fundamentais e avançados, como:
- 💡 **GPIOs**: Controle de LEDs, botões e sensores.
- 📡 **Conectividade**: Wi-Fi, Bluetooth (BLE), MQTT e HTTP.
- ⚙️ **Eficiência**: Deep Sleep, RTOS e interrupções.
- 🖥️ **Interface**: Displays OLED, Servidores Web locais e Dashboards.

---

## 📁 Projetos Explorados

Aqui estão os projetos que já desenvolvi (até agora):

| Projeto | Descrição | Status |
| :--- | :--- | :--- |
| [**Counter ESP32**](./Counter%20ESP32) | Contador binário de 3 bits com debounce e LEDs. | ✅ Finalizado |
| [**PWM Fade**](#) | Controle de intensidade de brilho (LED Breathing) usando PWM. | ⏳ Em Progresso |
| [**Leitura Analógica**](#) | Lendo valores de um potenciômetro ou sensor LDR (ADC). | 📝 Planejado |
| [**Display OLED I2C**](#) | Mostrando textos e formas em um display OLED 128x64. | 📝 Planejado |

---

## 🛠️ Meu Arsenal de Ferramentas

- **Hardware**: ESP32 (NodeMCU / DevKit V1)
- **Framework**: Arduino Framework + C++
- **IDE**: Visual Studio Code + PlatformIO
- **Simulação**: SimulIDE
- **Prototipagem**: Fritzing / Tinkercad

---

## 🚀 Como Executar

Para rodar qualquer um destes projetos, recomendo o uso do **VS Code** com a extensão **PlatformIO**. 

1. Clone o repositório:
   ```bash
   git clone https://github.com/paulorf0/esp32-learning.git
   ```
2. Abra a pasta do projeto desejado no VS Code.
3. Deixe o PlatformIO gerenciar as dependências e faça o Upload para sua placa!

---

## 📈 Próximos Passos (To-Do)

### 🧱 Fundamentos (Eletrônica e Código)
- [ ] Entender o uso de Resistores (Pull-up e Pull-down).
- [ ] Dominar o uso de **Interrupções** para botões (mais eficiente que polling).
- [ ] Aprender a usar o **PWM** para controlar motores e brilho de LEDs.
- [ ] Usar o **ADC** (Conversor Analógico-Digital) para ler sensores analógicos.
- [ ] Implementar leitura de temperatura e umidade com o sensor **DHT11/22**.

### 📡 Conectividade e Avançado
- [ ] Criar um servidor web simples para ligar/desligar um LED via Wi-Fi.
- [ ] Integrar com plataformas IoT (Adafruit IO, ThingSpeak ou Blynk).
- [ ] Implementar o protocolo MQTT para comunicação entre dispositivos.
- [ ] Explorar o modo **Deep Sleep** para economia extrema de bateria.
- [ ] Estudar o uso de FreeRTOS para multitarefa (rodar dois códigos ao mesmo tempo).

---

Conecte-se comigo: [GitHub](https://github.com/paulorf0) | [LinkedIn](https://www.linkedin.com/in/paulo-ferlin/)

Feito com ☕ e muito código por [Paulo Ferlin](https://github.com/paulorf0)
