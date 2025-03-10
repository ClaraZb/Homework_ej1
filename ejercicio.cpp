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
            cout << matriz[i][j] << endl;
            count ++;
        }
    }
    return matriz;
}

void imprimirmatriz(int n, vector <vector<int>> matriz){
    for (int i = n - 1; i >= 0; i --){
        int j = n - 1;
        while (j >= 0){
            cout << "Matriz[" + to_string(i) + "][" + to_string(j) + "] = " + to_string(matriz[i][j]) << endl;
            j --;
        }
    }
}

int main(){
    vector <vector<int>> matriz = crearmatriz(3);
    imprimirmatriz(3, matriz);
    return 0;
}