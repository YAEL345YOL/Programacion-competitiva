# Longest Incresing Subsequence (LIS)
Para encontrar el mayor LIS de un array debemos iterar cada posición del arreglo y hacer una búsqueda binaria.
Supongamos el arreglo:

$A = \{1,8,9,7,8,11,13\}$

Debemos hacer un arreglo auxiliar, inicialmente vacío, nos referimos a este como:

$B = ∅$

Nos referimos a un elemento de $B$ como $b_i$, y de $A$ como $a_i$

El cual llevará una especie de "registro" del la mayor subsecuencia en cada momento (mayor tamaño), adelante se explicará esto de mejor manera.

Para empezar, vamos a aplicar el siguiente procedimiento pora cada $a_i$ donde $0≤i<|A|$ donde $|A|$ se refiere a la cardinalidad del arreglo $A$.

Los procedimientos son los siguientes:

(Aplicar a cada elemento del arreglo)
- Si el elemento en $a_i$ es mayor que el elemento más a la derecha de $B$ en otras palabras: $a_i>b_{|B|-1}$ entonces vamos a hacer lo siguiente:
1. Vamos a agregar $a_i$ al arreglo $B$

- Si el elemento NO es mayor que el último elemento de $B$, en otras palabras: $a_i≤b_{|B|-1}$, entonces vamos a hacer lo siguiente:
1. Vamos a hacer una búsqueda binaria $lower\_bound()$ a $B$, de forma que busquemos el primer elemento igual o mayor a $a_i$.
2. Después, vamos a realizar $b_{lower\_bound(B.begin(),B.end(),a_i)} = a_i$ En otras palabras, del arreglo $B$ vamos a cambiar el valor en la posición obtenida por la función: $lower\_bound(B.begin(),B.end(),a_i)$ por el valor $a_i$.

Una vez iterados todos los elementos del arreglo $A$ podemos saber el LIS simplemente sacando la cardinalidad de $B$, ósea que la respuesta es $|B|$.
### ¿Por qué funciona?
 
 El motivo de que funcione este procedimiento, es que si observamos detenidamente el proceso de agregar elementos en el arreglo, lo que hacemos es **únicamente agregar o hacer push a aquellos elementos los cuales son necesariamente mayores al último elemento de $B$**, de forma que siempre que agreguemos un elemento el tamaño de su subsecuencia es el número de elementos del arreglo y en dado caso contario estamos **remplazando** elementos en lugar de agregar, por tanto, en cada momento, si es que la subsecuencia que estamos viendo **NO** es la mejor, entonces simplemente se va a reutilizar para el siguiente candidato, cabe aclarar que este método tiene limitantes y apesar de su baja complejidad *O(n log n)* sigue siendo una
  de las mejores alternativas respecto a encontrar el LIS.
### Código
[Codigos/DP/Longest increasing subsequence.cpp](https://github.com/YAEL345YOL/Programacion-competitiva/blob/main/Codigos/DP/Longest%20increasing%20subsequence.cpp)