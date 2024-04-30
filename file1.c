#include <stdio.h>
#include <stdlib.h>

void funkcja() {
    int variable1, variable2, variable3, variable4;
int *ptr_variable1 = malloc(sizeof(int));
int *ptr_variable2 = malloc(sizeof(int));
int *ptr_variable3 = malloc(sizeof(int));
int *ptr_variable4 = malloc(sizeof(int));

	
    printf("Adres zmiennej 'variable1' na stosie: %p\n", (void *)&variable1);
    printf("Adres zmiennej 'variable2' na stosie: %p\n", (void *)&variable2);
    printf("Adres zmiennej 'variable3' na stosie: %p\n", (void *)&variable3);
    printf("Adres zmiennej 'variable4' na stosie: %p\n", (void *)&variable4);
    printf("Adres zmiennej 'ptr_variable1' na stercie: %p\n", (void *)ptr_variable1);
    printf("Adres zmiennej 'ptr_variable2' na stercie: %p\n", (void *)ptr_variable2);
    printf("Adres zmiennej 'ptr_variable3' na stercie: %p\n", (void *)ptr_variable3);
    printf("Adres zmiennej 'ptr_variable4' na stercie: %p\n", (void *)ptr_variable4);

}

int main() {
    funkcja();
    return 0;
}

/* W instrukcji jest pytanie które brzmi tak: "zaobserwuj w którą stronę rozszerza się
stos i sterta". Oto moja odpowiedz na niego: stos rośnie w dół, a sterta rozszerza się w górę.*/
