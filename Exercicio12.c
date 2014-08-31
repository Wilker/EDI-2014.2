/*12) Escreva uma função em C que determina a média e a situação de um aluno em uma disciplina. 
A função recebe como parâmetros as três notas de um aluno (p1, p2, e p3), seu número de faltas 
(faltas),  o  número  total  de  aulas  da  disciplina  (aulas)  e  o  ponteiro  para  uma  var iável  (media), 
conforme o seguinte protótipo: 

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);
 
Na  variável  indicada  pelo  ponteiro  media,  a  função  deve  armazenar  a  média  do  aluno,  calculada 
como a média aritmética das três provas. Além disso, a função deve retornar um caractere indicando 
a situação do aluno no curso, de acordo com o critério definido na tabela abaixo:
Número de Faltas                         Média                Situação   Retorno
Menor ou igual a 25% do total de aulas / Maior ou igual 6,0 / Aprovado / A
Menor ou igual a 25% do total de aulas / Menor que 6,0      /Reprovado / R
Maior que 25% do total de aulas        /Qualquer            / Reprovado por faltas / F*/

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);
float med(float p1, float p2, float p3);

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media) {
    float m = med(p1, p2, p3);
    *media = m;
    int presencaPercent = ((aulas - faltas) * 100) / aulas;
    if (presencaPercent >= 75 && m >= (float)6.0) return 'A';
    else
        if (presencaPercent >= 75 && m < (float)6.0) return 'R';
    else
        if (presencaPercent < 75) return 'F';
}

float med(float p1, float p2, float p3) {
    return (p1 + p2 + p3) / 3;
}
