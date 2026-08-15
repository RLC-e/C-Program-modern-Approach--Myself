#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

void to_lower(char* str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}


int main(int argc, char* argv[])
{
    const char* planets[] = { "Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto" };

    int i, j;
    char argv_cope[100][50];
    char planets_cope[100][50];

    for (int n = argc - 1; n >= 0;n--)
    {
        strcpy(argv_cope[n], argv[n]);
        to_lower(argv_cope[n]);
    }
    for (int n = argc - 1; n >= 0;n--)
    {
        strcpy(planets_cope[n], planets[n]);
        to_lower(planets_cope[n]);
    }

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++) {
            if (strcmp(argv_cope[i], planets_cope[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }

        if (j == NUM_PLANETS) {
            printf("%s is not a planet\n", argv[i]);
        }
    }

    return 0;
}