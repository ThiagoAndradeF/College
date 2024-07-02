#include <iostream>
#include <iomanip> // Adicionado para controle de precisão de ponto flutuante
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <climits>
#include <float.h>
#include <cmath> // Biblioteca para usar pow

using namespace std;
using namespace std::chrono;

// Função para gerar vetores aleatórios
void gerarVetorAleatorio(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; // Gera números aleatórios entre 0 e 99
    }
}

// Função para copiar um vetor
void copiarVetor(int src[], int dest[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        dest[i] = src[i];
    }
}

// Implementação do Insertion Sort
void insertionSort(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        int chave = vetor[i];
        int j = i - 1;
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}

// Implementação do Shell Sort usando a sequência de Hibbard
void shellSort(int vetor[], int tamanho) {
    int k = 1;
    while (pow(2, k) - 1 < tamanho) {
        k++;
    }
    while (k > 0) {
        k--;
        int gap = pow(2, k) - 1;
        for (int i = gap; i < tamanho; i++) {
            int temp = vetor[i];
            int j;
            for (j = i; j >= gap && vetor[j - gap] > temp; j -= gap) {
                vetor[j] = vetor[j - gap];
            }
            vetor[j] = temp;
        }
    }
}

// Implementação do Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    bool troca = true;
    int k, temp;
    int lim = tamanho - 1;
    while (troca) {
        troca = false;
        for (int i = 0; i < lim; i++) {
            if (vetor[i] > vetor[i + 1]) {
                temp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = temp;
                k = i;
                troca = true;
            }
        }
        lim = k;
    }
}

// Implementação do Quick Sort
void quickSort(int vetor[], int esq, int dir) {
    if (esq < dir) {
        int i = esq, j = dir;
        int x = vetor[(esq + dir) / 2];
        while (i <= j) {
            while (vetor[i] < x) i++;
            while (vetor[j] > x) j--;
            if (i <= j) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
                i++;
                j--;
            }
        }
        quickSort(vetor, esq, j);
        quickSort(vetor, i, dir);
    }
}

// Adaptador para Quick Sort para assinar como (int*, int)
void quickSortAdaptador(int vetor[], int tamanho) {
    quickSort(vetor, 0, tamanho - 1);
}

// Implementação do Selection Sort
void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j;
            }
        }
        // Troca sem usar a função swap
        int temp = vetor[minIndex];
        vetor[minIndex] = vetor[i];
        vetor[i] = temp;
    }
}

// Implementação do Merge Sort
void mergeSort(int vetor[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        mergeSort(vetor, esquerda, meio);
        mergeSort(vetor, meio + 1, direita);

        int n1 = meio - esquerda + 1;
        int n2 = direita - meio;

        int* L = new int[n1];
        int* R = new int[n2];

        for (int i = 0; i < n1; i++) {
            L[i] = vetor[esquerda + i];
        }
        for (int i = 0; i < n2; i++) {
            R[i] = vetor[meio + 1 + i];
        }

        int i = 0, j = 0, k = esquerda;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                vetor[k++] = L[i++];
            } else {
                vetor[k++] = R[j++];
            }
        }

        while (i < n1) {
            vetor[k++] = L[i++];
        }

        while (j < n2) {
            vetor[k++] = R[j++];
        }

        delete[] L;
        delete[] R;
    }
}

// Adaptador para Merge Sort para assinar como (int*, int)
void mergeSortAdaptador(int vetor[], int tamanho) {
    mergeSort(vetor, 0, tamanho - 1);
}

// Função para calcular a diferença de tempo
double getTimeDiff(steady_clock::time_point inicio, steady_clock::time_point fim) {
    return duration_cast<duration<double>>(fim - inicio).count();
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Inicializa a semente para geração de números aleatórios

    int X, M, N;
    cout << "Digite o valor de X (numero de vezes para cada algoritmo): ";
    cin >> X;
    cout << endl;
    cout << "Digite o valor de M (numero de vetores): ";
    cin >> M;
    cout << endl;
    cout << "Digite o valor de N (tamanho dos vetores): ";
    cin >> N;

    // Alocação de memória para os vetores
    int** vetores = new int*[M];
    for (int i = 0; i < M; i++) {
        vetores[i] = new int[N];
        gerarVetorAleatorio(vetores[i], N);
    }

    // Array de ponteiros para as funções de ordenação
    void (*funcoesOrdenacao[])(int*, int) = {insertionSort, shellSort, bubbleSort, quickSortAdaptador, selectionSort, mergeSortAdaptador};
    const char* nomesOrdenacao[] = {"Insertion Sort", "Shell Sort", "Bubble Sort", "Quick Sort", "Selection Sort", "Merge Sort"};

    const int numOrdenacoes = sizeof(funcoesOrdenacao) / sizeof(funcoesOrdenacao[0]);

    // Loop para execução de cada algoritmo de ordenação
    for (int s = 0; s < numOrdenacoes; s++) {
        double piorCaso = 0;
        double melhorCaso = DBL_MAX;
        double tempoTotal = 0;
        cout << endl <<"Executando " << nomesOrdenacao[s] << endl << endl;

        // Loop para execução dos testes
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < X; j++) {
                int* tempVetor = new int[N];
                copiarVetor(vetores[i], tempVetor, N);

                // Medição do tempo de execução
                auto inicio = steady_clock::now();
                funcoesOrdenacao[s](tempVetor, N);
                auto fim = steady_clock::now();

                double duracao = getTimeDiff(inicio, fim);
                tempoTotal += duracao;
                if (duracao > piorCaso) {
                    piorCaso = duracao;
                }
                if (duracao < melhorCaso) {
                    melhorCaso = duracao;
                }

                delete[] tempVetor;
            }
        }

        double tempoMedio = tempoTotal / (M * X);
        cout << fixed << setprecision(6); // Definindo a precisão para 6 casas decimais
        cout << nomesOrdenacao[s] << " - Pior caso: " << piorCaso << " segundos, Melhor caso: " << melhorCaso << " segundos, Tempo medio: " << tempoMedio << " segundos" << endl;
        cout << nomesOrdenacao[s] << " - Tempo total: " << tempoTotal << " segundos" << endl;
    }

    // Liberação da memória alocada para os vetores
    for (int i = 0; i < M; i++) {
        delete[] vetores[i];
    }
    delete[] vetores;

    return 0;
}
