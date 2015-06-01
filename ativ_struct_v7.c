/***************************
*Atividade sobre Estruturas
*Clarice Scheibe Ribeiro
*V5 - 25/05/2015
***************************/

//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//constantes
const char NOME_ARQ[] = "p_c.txt";

//estruturas
struct Ponto2D {
  float x;
  float y;
};

struct CorRGB {
    int r;
    int g;
    int b;
};

struct Circulo {
    struct Ponto2D centro;
    float raio;
    struct CorRGB cor;
};

//funções
//preencher um Ponto2D e um Circulo com entrada pelo teclado
void leInstancias(struct Ponto2D *p, struct Circulo *c) {
    printf("Recolher dados de um ponto 2D");
    printf("\n  *Entre com a coordenada x: ");
    printf("  *Entre com a coordenada y: ");
    scanf("%f", &(p -> x));
    scanf("%f", &(p -> y));

    printf("\nRecolher dados dem um Circulo");
    printf("\n  *Entre com a coordenada x do centro: ");
    scanf("%f", &(c -> centro.x));
    printf("  *Entre com a coordenada y do centro: ");
    scanf("%f", &(c -> centro.y));
    printf("  *Entre com o comprimento do raio: ");
    scanf("%f", &(c -> raio));
    printf("  *Entre com o valor de r (cor RGB): ");
    scanf("%d", &(c -> cor.r));
    printf("  *Entre com o valor de g (cor RGB): ");
    scanf("%d", &(c -> cor.g));
    printf("  *Entre com o valor de b (cor RGB): ");
    scanf("%d", &(c -> cor.b));
}

//apresentar na tela instancias de Ponto2D e Circulo
void mostraInstancias(const struct Ponto2D *p, const struct Circulo *c) {
    printf("\nInstancia Ponto2D");
    printf("\n  *Coordenadas (x, y): (%.2f, %.2f)", p -> x, p -> y);

    printf("\n\nInstancia Circulo");
    printf("\n  *Coordenadas centro (x, y): (%.2f, %.2f)", c -> centro.x,
    c -> centro.y);
    printf("\n  *Comprimento do raio: %.2fUM", c -> raio);
    printf("\n  *Valores RGB: R %d, G %d, B %d\n\n", c -> cor.r, c -> cor.g, c -> cor.b);
}

//verificar se um Ponto2D esta dentro de um Circulo
int ehInterno(const struct Ponto2D *p, const struct Circulo *c) {
    int interno = 0;
    float dist = sqrt(pow(((p -> x) - (c -> centro.x)), 2) + pow(((p -> y) -
    (c -> centro.y)), 2));
    if(dist < c -> raio)
        interno = 1;
    return(interno);
}

//ler instancia Ponto2D e Circulo em arquivo
void leArquivoInstancias(const char *nomeArquivo, struct Ponto2D *p, struct Circulo *c) {
    char var[10];
    FILE *fp;
    fp = fopen(nomeArquivo, "r");
    if(fp == NULL)
        exit(1);

    fscanf(fp, "%s", var);
    if((strcmp(var, "#Ponto")) == 0){
        fscanf(fp, "%f %f", &(p -> x), &(p -> y));
    }

    fscanf(fp, "%s", var);
    if((strcmp(var, "#Circulo")) == 0) {
        fscanf(fp, "%f %f %f %d %d %d", &(c -> centro.x), &(c -> centro.y), &(c -> raio),&(c -> cor.r), &(c -> cor.g), &(c -> cor.b));
    }
    fclose(fp);
}
//função main
int main() {
    //instâncias
    struct Ponto2D ponto1;
    struct Circulo circ1;

    int interno;
    //INICIO TESTE
    leInstancias(&ponto1, &circ1);
    mostraInstancias(&ponto1, &circ1);

    leArquivoInstancias(NOME_ARQ, &ponto1, &circ1);
    mostraInstancias(&ponto1, &circ1);

    interno = ehInterno(&ponto1, &circ1);
    if (interno)
        printf("O ponto eh interno ao circulo\n\n");
    else
        printf("O ponto nao eh interno ao circulo\n\n");
    //FIM TESTE
    return 0;
}
