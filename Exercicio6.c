/*6) Implemente uma função que recebe como parâmetro um vetor de números reais vet de tamanho n
e retorna o índice do maior valor armazenado nesse vetor. Considere que não há valores repetidos 
nesse vetor. Essa função deve obedecer ao protótipo:
int max_vet (int n, float *vet);*/

int max_vet(int n, float *vet);

int max_vet(int n, float *vet) {
    if (n <= 0) return -1;
    int i, max = 0;
    float maior = 0.0;
    for (i = 0; i < n; i++) {
        if (vet[i] > maior) {
            max = i;
            maior = vet[i];
        }
    }
    return max;
}
