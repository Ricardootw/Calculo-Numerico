# Cálculo Numérico — Resolução de SEALs por Métodos Diretos

## Descrição

Este projeto foi desenvolvido como atividade para a disciplina de **Cálculo Numérico** do curso de **Engenharia de Controle e Automação**, na **Escola Politécnica de Pernambuco (POLI/UPE)**.
Consiste na resolução de **Sistemas de Equações Algébricas Lineares (SEALs)** utilizando **métodos diretos**:

- Eliminação de Gauss
- Fatoração LU
- Decomposição de Cholesky

Os cálculos foram documentados via **LaTeX**, com os resultados organizados em PDF.

---

## Metodologias Aplicadas

### Eliminação de Gauss
- Transformação da matriz em forma triangular superior.
- Cálculo de multiplicadores.
- Substituição regressiva para obtenção das soluções.

### Fatoração LU
- Decomposição da matriz A em L (triangular inferior) e U (triangular superior).
- Pivoteamento parcial para garantir estabilidade numérica.
- Resolução sequencial dos sistemas Ly = b e Ux = y.

### Decomposição de Cholesky
- Aplicada a matrizes simétricas e definidas positivas.
- Decomposição de A em A = G·Gt.
- Resolução sequencial dos sistemas G·y = b e Gt·x = y.

---

## Integrantes

- Caio César Leite de Lima
- Gabriel Nóbrega Toscano
- Ricardo Timoteo Wanderley

---

## Data

Maio de 2025

---

## Observações

- A eliminação de Gauss também conta com código em linguagem C, descrito no PDF do prejeto e disponível para consulta no repositório.
- Os resultados foram organizados em PDF para melhor visualização e consulta.
- Projeto supervisionado pelo Prof. Dr. Jornandes Dias.
