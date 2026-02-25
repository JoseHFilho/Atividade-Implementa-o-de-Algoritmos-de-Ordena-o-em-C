# 📊 Relatório – Algoritmos de Ordenação em C

## 1. Introdução

Neste trabalho, implementei alguns algoritmos de ordenação na linguagem C com o objetivo de entender melhor como cada um funciona na prática e comparar o desempenho entre eles.

Os algoritmos implementados foram:

- Bubble Sort  
- Selection Sort  
- Insertion Sort  
- Quick Sort  
- Merge Sort  

---

## 2. Desenvolvimento

Cada algoritmo foi desenvolvido em um arquivo separado, contendo uma função específica para ordenar o vetor.

Foi utilizado o mesmo vetor em todos os testes:

{9, 5, 2, 7, 1, 8, 3, 6, 4, 0}


Também foi utilizada a função `clock()` para medir o tempo de execução de cada algoritmo, permitindo a comparação de desempenho entre eles.

---

## 3. O que eu percebi durante o desenvolvimento

Durante a implementação, observei algumas diferenças importantes entre os algoritmos:

- O **Bubble Sort** foi o mais fácil de entender, porém realiza muitas repetições desnecessárias.  
- O **Selection Sort** também é simples, mas não apresenta grande melhoria de desempenho em relação ao Bubble Sort.  
- O **Insertion Sort** mostrou-se mais eficiente, pois organiza o vetor gradualmente.  
- O **Quick Sort** foi mais difícil de implementar, mas demonstrou ser muito mais rápido.  
- O **Merge Sort** também é mais complexo, porém resolve o problema de forma organizada, dividindo-o em partes menores.  

---

## 4. Resultados

Todos os algoritmos conseguiram ordenar o vetor corretamente.

**Exemplo:**

Antes: 9 5 2 7 1 8 3 6 4 0
Depois: 0 1 2 3 4 5 6 7 8 9


Mesmo com um vetor pequeno, já foi possível perceber diferenças no tempo de execução.

---

## 5. Comparação

Com base nos testes realizados:

- Mais lentos:
  - Bubble Sort  
  - Selection Sort  

- Desempenho intermediário:
  - Insertion Sort  

- Mais rápidos:
  - Quick Sort  
  - Merge Sort  

Isso acontece porque algoritmos mais avançados utilizam estratégias mais eficientes, enquanto os mais simples repetem muitas operações desnecessárias.

---

## 6. Conclusão

Com esta atividade, foi possível compreender melhor o funcionamento dos algoritmos de ordenação na prática.

Principais aprendizados:

- Nem sempre o algoritmo mais simples é o mais eficiente  
- Algoritmos mais complexos podem oferecer melhor desempenho  

---
