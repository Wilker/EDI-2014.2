/*3)  Escreva  uma  função  RECURSIVA  que  recebe  como  parâmetro  um  valor  inteiro  e  imprime  a 
representação binária deste número. A função deve ter o seguinte protótipo:
void imprime_binario(int n);*/

void imprime_binario(int n){
    if(n==1){
        printf("1");
    }
    if(n>1){
        imprime_binario(n/2);
        printf("%d!!",n%2);
    }
}