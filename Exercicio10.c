/*10)  Escreva  uma  função  que  verifica  se  um  vetor  de  números  inteiros  está  em  ordem  crescente, 
decrescente  ou  fora  de  ordem.  A  função  recebe  como  parâmetros  o  vetor  vet  e  o  inteiro  n,  que 
representa o tamanho do vetor, e deve retornar 1, se o vetor está em ordem crescente,  -1, se está em 
ordem decrescente, ou 0, se não está em ordem. Considere que o vetor não tem valores repetidos. O 
protótipo da função é:
int ordenado(int *vet, int n);*/

int ordenado(int *vet, int n);

int ordenado(int *vet, int n) {
    if (n <= 0)return 0;
    if (n == 1)return 1;
    else {
        int ordem = 0;
        if(vet[0]<vet[1])
            ordem = 1; // Está em Ordem Crescente
        else if (vet[0]>vet[1])
            ordem = -1; // Está em Ordem Decrescente
        int i;
        for (i = 0; i < n - 1; i++) {
            if (ordem == 1 && vet[i]<vet[i+1])
                continue;
            else if(ordem==1 && vet[i]>vet[i+1])
                return 0;
            if (ordem == -1 && vet[i]>vet[i+1])
                continue;
            else if(ordem== -1 && vet[i]<vet[i+1])
                return 0;
        }
    return ordem;
    }
}