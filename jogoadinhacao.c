// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Imprime o cabeçalho do jogo
    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");
    
    int numerosecreto = 15;
   // armazenar o chute
    int chute;
        printf("Qual é o seu chute?");
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);
        
            //SE O CHUTE FOR IGUAL AO NÚMERO SECRETO
    if(chute == numerosecreto){
        printf("Parabéns!! Você acertou!!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
    //CASO CONTRÁRIO
    }else{
        printf("Você errou!!\n");
        printf("Não desanime, tente novamente! \n");
        
    }

    