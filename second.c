#include <stdio.h>

int main() {
    char filename[41], letter, ch;
    int count = 0;
    FILE *file;
    printf("Podaj nazwe pliku: ");
    scanf("%40s", filename);
    printf("Podaj litere do zliczenia: ");
    scanf(" %c", &letter);
    file = fopen(filename, "r");
    if (!file) {
        printf("Nie mozna otworzyc pliku!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == letter) count++;
    }
    printf("Litera '%c' wystepuje %d razy w pliku.\n", letter, count);

    fclose(file);
    return 0;
}
