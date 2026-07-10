# Simulación de un Agente Autónomo bidimensional

Este proyecto desarrolla un algoritmo en C que simula el comportamiento y la toma de decisiones de un robot o agente autónomo en un espacio cerrado de 31x31 casillas. El objetivo del agente es localizar y recoger dos objetos distribuidos aleatoriamente de la forma más eficiente posible.

## 🧠 Lógica y Algoritmia
1. **Distancia de Manhattan:** El agente calcula la distancia absoluta entre su posición y los objetos mediante el cálculo $|x - x_0| + |y - y_0|$, evitando la carga computacional de raíces cuadradas para evaluar rápidamente cuál es el objetivo más cercano.
2. **Navegación Dinámica:** Implementa un sistema de coordenadas que prioriza movimientos diagonales combinados con ortogonales para reducir distancias de manera óptima.
3. **Re-enrutamiento:** Al alcanzar el objetivo prioritario, el sistema recalcula la trayectoria en tiempo real hacia el punto restante.

## 🛠️ Tecnologías aplicadas
- Lenguaje C
- Generación pseudoaleatoria (`stdlib.h` y `time.h`)