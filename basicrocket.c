#include <stdio.h>

define printCone(void) {
    printf("    /\\\n");
    printf("   /  \\\n");
    printf("  /    \\\n");
    printf("  ------");
}

define printBox(void) {
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
