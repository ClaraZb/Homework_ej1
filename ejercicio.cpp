#include <iostream>
#include <vector>
using namespace std;

vector <vector<int>> crearmatriz(int n){
    vector <vector<int>> matriz;
    for (int i = 0; i < n; i++){
        matriz.push_back(vector<int> (n, 0));
    }

    int count = 1;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            matriz[i][j] = count;
            count ++;
        }
    }
    return matriz;
}

void imprimirmatriz(int n, vector <vector<int>> matriz){
    for (int i = n*n - 1; i >= 0; i--){
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