#include <stdio.h>
#include <string.h>

int main() {
    char senha[100];

    while (1) {

        printf("\n- Olá, digite uma senha contendo letras maiúsculas e números: ");
        scanf("%s", senha);

        if (isValidInput(senha)) {
            break;
        } else {
            printf("\n##ERRO: Entrada inválida. Por favor, insira apenas letras maiúsculas e números.\n");
        }
    }


    Cripto(senha);
    printf("\n- Senha criptografada: %s\n", senha);

    Decripto(senha);
    printf("- Senha descriptografada: %s\n", senha);

    return 0;
}

int isValidInput(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        if (!isupper(s[i]) && !isdigit(s[i])) {
            return 0;
        }
    }
    return 1;
}

void Cripto(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (s[i] == 'Z') {
                s[i] = 'A';
            } else {
                s[i] += 1;
            }
        } else if (s[i] >= '0' && s[i] <= '9') {
            if (s[i] == '9') {
                s[i] = '0';
            } else {
                s[i] += 1;
            }
        }
    }
}

void Decripto(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (s[i] == 'A') {
                s[i] = 'Z';
            } else {
                s[i] -= 1;
            }
        } else if (s[i] >= '0' && s[i] <= '9') {
            if (s[i] == '0') {
                s[i] = '9';
            } else {
                s[i] -= 1;
            }
        }
    }
}


