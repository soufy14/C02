#include <stdio.h>

int main() {

    int a = 0, b = 0;
// Inversion sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
scanf("%d %d", &a, &b); // lire entre de l'utilisateur

printf("Après échange: a = %d, b = %d\n", a, b);
    return 0;
}
// céest un programme qui lit deux entiers et les échange sans utiliser de variable temporaire 