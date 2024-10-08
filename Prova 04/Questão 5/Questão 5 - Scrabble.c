#include <stdio.h>
#include <ctype.h>
#include <string.h>

int pontos(char palavra[]) {
    int valor[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int pontos = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        char letra = toupper(palavra[i]);//deixa a letra maiuscula
        if (letra >= 'A' && letra <= 'Z')  // Somando os pontos baseados na posição da letra
            pontos += valor[letra - 'A'];//pega a posição da letra convertida => 0 ao 25
    }
    return pontos;
}

int main() {
    char jogador1[25];
    char jogador2[25];
    
    printf("Digite a palavra do jogador 1: ");
    scanf("%24s", jogador1);
    
    printf("Digite a palavra do jogador 2: ");
    scanf("%24s", jogador2);
    
    int pontosJogador1 = pontos(jogador1);
    int pontosJogador2 = pontos(jogador2);
    
    if (pontosJogador1 > pontosJogador2) {
        printf("Jogador 1 ganhou!\n");
    } else if (pontosJogador2 > pontosJogador1) {
        printf("Jogador 2 ganhou!\n");
    } else {
        printf("Empate!\n");
    }
    
    return 0;
}
