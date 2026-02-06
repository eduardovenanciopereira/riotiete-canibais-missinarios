#include <stdio.h>

// Função do apocalipse pra ver se os cornos vão sobreviver
void o_cu_foi_comido(int miss_corno_direita, int comecus_famintos_direita, int miss_corno_esquerda, int comecus_famintos_esquerda) {
    if (comecus_famintos_direita > miss_corno_direita && comecus_famintos_esquerda > miss_corno_esquerda) {
        printf("CUIDADO! O come cú atacou geral!\n");
    } else {
        printf("Todo mundo atravessando, cornos salvos\n");
    }
}

int main() {
    // Direita: cheia de trouxas e comedores de cú
    int miss_corno_direita = 3;
    int comecus_famintos_direita = 3;

    // Esquerda: vazio, só os que sobreviveram
    int miss_corno_esquerda = 0;
    int comecus_famintos_esquerda = 0;

    // Travessia 1: 1 missionário + 1 canibal
    printf("Bote infernal: 1 missionário + 1 canibal embarcando\n");
    miss_corno_direita--; miss_corno_esquerda++;
    comecus_famintos_direita--; comecus_famintos_esquerda++;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    // Volta o missionário corno
    printf("Volta 1 missionário corno pro lado do inferno\n");
    miss_corno_esquerda--; miss_corno_direita++;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    // Travessia 2: 2 canibais famintos
    printf("Travessia: 2 canibais famintos\n");
    comecus_famintos_direita -= 2; comecus_famintos_esquerda += 2;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    // Volta 1 canibal chorando
    printf("Volta 1 canibal chorão\n");
    comecus_famintos_esquerda--; comecus_famintos_direita++;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    // Travessia 3: 2 missionários ingênuos
    printf("Travessia: 2 missionários ingênuos\n");
    miss_corno_direita -= 2; miss_corno_esquerda += 2;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    // Volta 1 missionário + 1 canibal
    printf("Volta 1 missionário + 1 canibal pra confusão\n");
    miss_corno_esquerda--; miss_corno_direita++;
    comecus_famintos_esquerda--; comecus_famintos_direita++;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    // Travessia 4: 2 missionários doidos
    printf("Travessia: 2 missionários doidos\n");
    miss_corno_direita -= 2; miss_corno_esquerda += 2;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    // Volta 1 canibal solitário
    printf("Volta 1 canibal solitário\n");
    comecus_famintos_esquerda--; comecus_famintos_direita++;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    // Travessia 5: 2 canibais famintos
    printf("Travessia: 2 canibais famintos\n");
    comecus_famintos_direita -= 2; comecus_famintos_esquerda += 2;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    // Volta 1 canibal chorando
    printf("Volta 1 canibal chorando\n");
    comecus_famintos_esquerda--; comecus_famintos_direita++;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    // Travessia 6: 2 canibais famintos
    printf("Travessia: 2 canibais famintos de novo\n");
    comecus_famintos_direita -= 2; comecus_famintos_esquerda += 2;
    o_cu_foi_comido(miss_corno_direita, comecus_famintos_direita, miss_corno_esquerda, comecus_famintos_esquerda);

    printf("Todos atravessaram vivos, o rio tá limpo de cornos!\n");

    return 0;
}