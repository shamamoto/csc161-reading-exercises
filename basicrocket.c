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

void drawRocketShip (void) {
    printCone (); 
    printBox ();
    printCone ();
}
