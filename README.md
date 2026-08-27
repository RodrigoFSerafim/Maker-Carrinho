# Maker-Carrinho

## 👥 Integrantes

| Nome | RM |
|---|---:|
| Rodrigo Fernandes Serafim | 550816 |
| Rodrigo Lima Aparecido Barbosa Lima | 98326 |
| Henrique de Brito Costa | 98831 |
| Adriano Lopes | 98574 |
| João Antonio Rihan | 99656 |
| Allan Von Ivanov | 98705 |

---

# 🚗 Chassi escolhido

Para o desenvolvimento do projeto foi escolhido um **chassi 2WD (Two-Wheel Drive)**, desenvolvido para projetos de robótica utilizando Arduino.

O chassi possui tração independente nas duas rodas, permitindo controlar individualmente o motor esquerdo e o motor direito. Para manter o equilíbrio do carrinho, o conjunto também possui uma **roda de apoio (roda boba)**.

O kit é composto pelos seguintes elementos principais:

- 1 chassi de acrílico;
- 2 rodas de borracha;
- 2 motores DC com caixa de redução;
- 1 roda de apoio;
- 1 suporte para 4 pilhas;
- Discos de encoder;
- Parafusos e elementos de fixação.

---

# 📐 Dimensões do Chassi

| **Componente** | **Comprimento** | **Largura** | **Altura** | **Forma de fixação** |
| :--- | :---: | :---: | :---: | :--- |
| **Chassi** | 22 cm | 14,7 cm | — | Parafusos e espaçadores |
| **Roda** | 7 cm* | 2,6 cm | 7 cm* | Encaixe no eixo do motor |
| **Motor DC** | — | — | — | Suporte e parafusos |
| **Roda de apoio** | — | — | — | Parafusos e espaçadores |
| **Arduino Uno Rev3** | 6,86 cm | 5,34 cm | — | Parafusos e espaçadores |
| **Suporte para 4 pilhas** | — | — | — | Parafusos, suporte ou fita dupla face |
| **Ponte H / Driver** | — | — | — | Parafusos, espaçadores ou fita dupla face |

> **Observação:** As dimensões podem variar de acordo com o fabricante e o modelo específico de cada componente. Os valores devem ser conferidos nos componentes utilizados na montagem final.

\* Nas rodas, **7 cm corresponde ao diâmetro aproximado** e **2,6 cm corresponde à largura**.

---

# ⚙️ Especificações dos Componentes

## 🖥️ Arduino Uno Rev3

O **Arduino Uno Rev3** será utilizado como o controlador principal do carrinho. Ele será responsável por receber as informações dos sensores e controlar o funcionamento dos motores através da Ponte H.

| Característica | Especificação |
| :--- | :--- |
| **Modelo** | Arduino Uno Rev3 |
| **Microcontrolador** | ATmega328P |
| **Comprimento** | 68,6 mm |
| **Largura** | 53,4 mm |
| **Altura** | Consultar fabricante |
| **Peso** | 25 g |
| **Tensão de operação** | 5 V |
| **Tensão de entrada recomendada** | 7–12 V |
| **Forma de fixação** | Parafusos e espaçadores |

### Forma de fixação

O Arduino será instalado sobre a base do chassi utilizando **espaçadores e parafusos**, mantendo a placa afastada da superfície de acrílico e facilitando sua remoção para manutenção.

### Datasheet / Documentação

[Arduino Uno Rev3 - Documentação Oficial](https://store.arduino.cc/products/arduino-uno-rev3)

---

## ⚙️ Motores DC com Caixa de Redução

O chassi utiliza **dois motores DC**, sendo um responsável pela movimentação da roda esquerda e outro pela movimentação da roda direita.

| Característica | Especificação |
| :--- | :--- |
| **Quantidade** | 2 |
| **Tipo** | Motor DC com caixa de redução |
| **Tensão de operação** | 3–6 V |
| **Relação de redução** | 1:48 |
| **Corrente sem carga** | 150 mA (3 V) / 200 mA (6 V) |
| **Velocidade sem carga** | 90 RPM (3 V) / 200 RPM (6 V) |
| **Forma de fixação** | Suporte e parafusos |

### Forma de fixação

Os motores são instalados nas laterais do chassi por meio dos **suportes próprios do kit e parafusos**.

Cada motor será responsável por uma das rodas, permitindo controlar individualmente o lado esquerdo e direito do carrinho.

---

## 🛞 Rodas

O projeto utiliza duas rodas de borracha conectadas diretamente aos eixos dos motores.

| Característica | Especificação |
| :--- | :--- |
| **Quantidade** | 2 |
| **Diâmetro** | 7 cm |
| **Largura** | 2,6 cm |
| **Material** | Borracha |
| **Forma de fixação** | Encaixe no eixo do motor |

### Forma de fixação

Cada roda será conectada diretamente ao eixo do respectivo motor, permitindo que a rotação do motor seja transmitida para a roda.

---

# 📊 Tabela Geral do Dimensionamento

| **Componente** | **Qtd.** | **Comprimento** | **Largura** | **Altura** | **Fixação** |
| :--- | :---: | :---: | :---: | :---: | :--- |
| Chassi | 1 | 22 cm | 14,7 cm | — | Parafusos / espaçadores |
| Rodas | 2 | Ø 7 cm | 2,6 cm | Ø 7 cm | Eixo dos motores |
| Motor DC | 2 | — | — | — | Suporte / parafusos |
| Roda de apoio | 1 | — | — | — | Parafusos / espaçadores |
| Arduino Uno | 1 | 6,86 cm | 5,34 cm | — | Parafusos / espaçadores |
| Suporte de pilhas | 1 | — | — | — | Parafusos / fita dupla face |
| Ponte H | 1 | — | — | — | Parafusos / espaçadores |


                    TRASEIRA

                 22 × 14,7 cm
