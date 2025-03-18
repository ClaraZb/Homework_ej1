#include <iostream>
#include <vector>
using namespace std;

/*
1.a)
Defino la matriz como un vector de vectores. AL inicializarla, el vector 'principal'
contiene n vectores (correspondientes a las filas) inicializados en 0.
Despues recorro la matriz agregando el valor que le corresponde a cada casilla. """

1.b)
En la teoria se dijo que los operadores nos servirian para este ejercicio asi que busque
una relacion entre el tamanio n de la matriz y los valores de cada casilla. 
Obtengo que el indice de una determinada fila se obtiene con la division entera de i/n, 
mientras que las columnas con el resto de i/n. 
*/

vector <vector<int>> crearmatriz(int n){
    vector <vector<int>> matriz;
    for (int i = 0; i < n; i++){
        matriz.push_back(vector<int> (n, 0)); //defino matriz inicializada en 0
    }

    int count = 1;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            matriz[i][j] = count; //le asigno el valor correspondiente a cada casilla
            count ++;
        }
    }
    return matriz;
}

void imprimirmatriz(int n, vector <vector<int>> matriz){
    for (int i = n*n - 1; i >= 0; i--){ //recorro desde atras para adelante
        int fila = i / n; 
        int columna = i % n;
        cout << "Matriz[" + to_string(fila) + "][" + to_string(columna) + "] = " + to_string(matriz[fila][columna]) << endl;
    }
}

int main(){
    vector <vector<int>> matriz = crearmatriz(3);
    imprimirmatriz(3, matriz);
    return 0;
}