Una subsecuencia es el resultante de eliminar algunos (o ningún) elemento de un arreglo.
Lo que quiere decir que un una subsecuencia podemos tomar o no un elemento, de forma que respetemos el orden relativo de los elementos.
De forma que si tenemos el arreglo:

$A = [1,0,8,6]$

Las subsecuencias válidas serían:

$[]$
$[1]$
$[0]$
$[8]$
$[6]$
$[1,0]$
$[1,8]$
$[1,6]$
$[0,8]$
$[0,6]$
$[8,6]$
$[1,0,8]$
$[1,0,6]$
$[1,8,6]$
$[0,8,6]$
$[1,0,8,6]$

Obsérvese que se mantiene el orden relativo de los elementos, lo único que cambia es si elegidos o no un elemento.
## Obtención - Forma recursiva
Para obtener las subsecuencias debemos iterar el arreglo y en cada iteración tomar y no tomar el elemento actual mediante llamadas recursivas, de forma que paremos al terminar de iterar el arreglo. 

Vamos a declarar una función la cual reciba como parámetro la posición actual en el arreglo, este será un entero $i$. También vamos a declarar un arreglo auxiliar $B$ el cual llevara el llevara el registro de la subsecuencia actual. Supongamos el siguiente pseudocódigo:

```
arreglo B = {}
función subsecuencia(entero i):
	si i == A.size():
		para cada e en B:
			imprimir e
		regresar
	agregar A[i] a B <- Incluimos el elemento actual de A a B
	subsecuencia(i+1) <- Llamamos a la función para ir al siguiente elemento
	eliminar el ultimo elemento de B <- Eliminar el ultimo elemento de B
	subsecuencia(i+1) <- Llamar a la funcion SIN incluir al elemento en A actual
```

Como se observa, en cada elemento estamos incluyendo y no incluyéndolo, de forma que cuando lleguemos al final del arreglo en alguna llamada recursiva sabremos que tenemos una subsecuencia lista para imprimir (como es el caso) o guardarla en una matriz.

Para ejemplificar esto de mejor manera vamos a suponer el arreglo:

$A = [1,7,3]$

y vamos a llamar a nuestra función recursiva $subsecuencia(0)$ con el arreglo global $B = Ø$ ($B$ vacío),
su ejecución se vería similar al siguiente árbol de recursión:

![RT](https://github.com/YAEL345YOL/Programacion-competitiva/assets/50465405/50c89946-f6fe-47f4-851f-81a1efb12cde)

Las llamadas recursivas a la izquierda representan no tomar el elemento y las de la derecha sí.
Como podemos observar, las hojas del árbol (las ultimas llamadas) representan las subsecuencias posibles del arreglo $A$.
Obsérvese que se imprimen los elementos de $B$ cuando $i$ = $A.size()$, esto implica una llamada recursiva extra la cual únicamente imprime los elementos y no hace mas llamadas.

![RT](https://github.com/YAEL345YOL/Programacion-competitiva/assets/50465405/12cc9112-a0fd-47ba-8372-bcd171e66e8d)

La complejidad de la solución recursiva es de $O(2^n)$, esto debido a que un nivel del árbol puede dar dos posibilidades, elegir o no, y este proceso continua para cada una de las llamadas generadas por la llamada actual.

![RT](https://github.com/YAEL345YOL/Programacion-competitiva/assets/50465405/b5e70565-bf76-4cab-b009-734e45a8e22b)
### Código:

```C++
vector<int>arr, act;
vector<vector<int>>subsets;

void subsequence(int i){
    if(i==arr.size()){
        subsets.push_back(act);
        return;
    }
    act.push_back(arr[i]);
    subsequence(i+1);
    act.pop_back();
    subsequence(i+1);
}
```