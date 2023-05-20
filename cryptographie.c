#include <stdio.h>

// Fonction de chiffrement de César
void chiffrementCesar(char message[], int decalage)
{
    int i = 0;

    while (message[i] != '\0')
    {
        if (message[i] >= 'A' && message[i] <= 'Z')
        {
            message[i] = ((message[i] - 'A' + decalage) % 26) + 'A';
        }
        // Vérifie si le caractère est une lettre minuscule
        else if (message[i] >= 'a' && message[i] <= 'z')
        {
            message[i] = ((message[i] - 'a' + decalage) % 26) + 'a';
        }

        i++;
    }
}

int main()
{
    char message[100];
    int decalage;

    printf("Entrez un message : ");
    fgets(message, sizeof(message), stdin);

    printf("Entrez le décalage : ");
    scanf("%d", &decalage);

    chiffrementCesar(message, decalage);

    printf("Message chiffré : %s\n", message);

    return 0;
}
