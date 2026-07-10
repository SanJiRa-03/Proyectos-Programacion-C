# Sistema de Gestión de Deportistas con Persistencia en Ficheros

Este módulo contiene un programa en C interactivo diseñado para gestionar un registro de deportistas. La práctica introduce conceptos fundamentales de persistencia de datos mediante el uso de flujos de archivos (`FILE *`), permitiendo guardar la información recopilada directamente en un fichero de texto (.txt) para evitar la pérdida de datos al cerrar la aplicación.

## 🛠️ Características Técnicas

El desarrollo de este sistema implementa soluciones a los siguientes bloques conceptuales:

- **Estructuras de Datos Personalizadas:** Definición de un `struct Deportista` que encapsula atributos de diferentes tipos (`char[]`, `int`, `float`) para modelar entidades del mundo real de forma limpia.
- **Flujos de Control Iterativos:** Uso de un bucle centralizado `while` controlado por banderas para mantener la ejecución del programa y un menú con un bloque condicional `switch-case`.
- **Estructura y Validación de Opciones:** Control estricto de opciones válidas del menú (del 1 al 6) con retroalimentación en caso de entradas fuera de rango.
- **Persistencia en Disco (`I/O Ficheros`):** Uso de la función `fopen` en modo de adición (`"a"`) junto con `fprintf` para transferir de manera organizada los datos del array en memoria volátil hacia un archivo de almacenamiento local secundario.

## 📂 Funcionalidades del Menú

El sistema presenta una interfaz por consola con las siguientes opciones de ejecución:

1. **Añadir deportista:** Solicita y almacena los datos de filiación y métricas físicas (Nombre, Edad, Altura, Peso) dentro de la estructura de la aplicación.
2. **Eliminar deportista:** *(Bloque modular planificado para futuras optimizaciones de vaciado de registros).*
3. **Buscar deportista:** Algoritmo de búsqueda lineal por coincidencia de cadena que filtra la base de datos local y muestra la ficha del deportista encontrado.
4. **Mostrar información:** Recorrido indexado del vector de estructuras en memoria para imprimir en pantalla el listado completo de los registros activos.
5. **Guardar información:** Volcado estructurado de los datos directamente en un fichero de texto persistente (`ListaDeportistas.txt`), incluyendo validaciones de seguridad de apertura del canal de datos (`NULL`).
6. **Salir:** Cierre seguro del programa y liberación del hilo de consola.

---
*Módulo enfocado en afianzar las bases de la entrada/salida de datos y los sistemas de archivos en lenguajes estructurados.*