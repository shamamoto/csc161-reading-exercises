#include <stdio.h>

void printCone(void) {
    printf("    /\\\n");
    printf("   /  \\\n");
    printf("  /    \\\n");
    printf("  ------");
}

void printBox(void) {
    printf("  ------\n");
    printf("  |    |\n");
    printf("  |    |\n");
    printf("  ------\n");
}

int main (void) {
    void drawRocketShip (void) 
        printCone (); 
        printBox ();
        printCone ();
}
