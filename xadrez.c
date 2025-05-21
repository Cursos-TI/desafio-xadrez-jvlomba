#include <stdio.h>


void recurcividadeT (int movT) {

  if (movT < 5){
    printf("Direita \n");
    recurcividadeT(movT + 1);
  }
}

void recursividadeB (){

  for (int linha = 1; linha <= 5; linha++){
    for (int coluna = 1; coluna >= 0; coluna--) {
        printf(coluna == 1 ? "cima," : " direita\n");
     }
  }
}

void recurcividadeR (){

for (int r = 0; r < 6; r++){
  printf("Esquerda \n");
}

}

int main(){

  printf("   ####BEM VINDO!!! DESAFIO XAREZ#### \n");
  //movimentação da torre 
  printf("A Torre ira se movimentar \n");
  int movt = 0;
  recurcividadeT(movt);  //chamando void
  printf(" *************************** \n"); 
  //movimentação do bispo
  printf("O bispo ira se movimentar \n");
  recursividadeB();  //chamando void
  printf(" *************************** \n"); 
  //movimentação da rainha
  printf("A Rainha ira se movimentar \n");
  recurcividadeR();  //chamando void
  printf(" *************************** \n"); 

  //movimentação do cavalo
  printf("O Cavalo ira se movimentar\n"); 
 for (int cavalo = 1; cavalo <= 2; cavalo++)
 {  printf("cima\n");
  for (int cavalomov = 2; cavalomov == cavalo; cavalo++) {
    printf("direita\n");
  }
  
}


}