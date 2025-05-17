#include <stdio.h>

int main() {

    int a = 0, b = 0;

   scanf("%d %d", &a, &b); // lire entre de l'utilisateur
// Inversion sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
   printf("Après échange: a = %d, b = %d\n", a, b);
return 0;
}
// céest un programme qui lit deux entiers et les échange sans utiliser de variable temporaire 