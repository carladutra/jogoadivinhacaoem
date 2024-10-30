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
        if(chute > numerosecreto){
            printf("O seu chute foi maior que o número secreto, tente novamente. \n");
        if(chute < numerosecreto){
                printf("O seu chute foi menor que o número secreto, tente novamente. \n");
            }
            
        }
        printf("Você errou!!\n");
        printf("Não desanime, tente novamente! \n");
        
    }

    