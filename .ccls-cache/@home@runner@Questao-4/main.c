#include <stdio.h>
#include<string.h>

  struct faturamento {
    char estado[6];
    double mensal;
    double porcentagem;
  };

int main(void) {
  double soma=0;
  int i=0;
  
  struct faturamento empresa[5];
  
  strcpy(empresa[0].estado, "SP");
  empresa[0].mensal = 67836.43;

  strcpy(empresa[1].estado, "RJ");
  empresa[1].mensal = 36678.66;

  strcpy(empresa[2].estado, "MG");
  empresa[2].mensal = 29229.88;

  strcpy(empresa[3].estado, "ES");
  empresa[3].mensal = 27165.48;

  strcpy(empresa[4].estado, "Outros");
  empresa[4].mensal =  19849.53;

  for(; i<5; i++){
    soma+=empresa[i].mensal;
  }
  
  i=0;
  for(; i<5; i++){
    empresa[i].porcentagem = empresa[i].mensal*100/soma;
  }

  i=0;
  for(; i<5; i++){
    printf("Estado: %s\n", empresa[i].estado);
    printf("Estado: %.2f\n", empresa[i].mensal);
    printf("Estado: %.2f%\n", empresa[i].porcentagem);
    printf("\n");
  }
    
}