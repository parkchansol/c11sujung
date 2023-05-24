#include "menu.h"
#include <stdio.h>
#include <string.h>

void display_menu() {
    int width = 48;
    int height = 13;
    char screen[(width + 1) * height];

    int i, j;
    for (j = 0; j < height; j++) {
        for (i = 0; i < width; i++) {
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1)
                screen[i + j * (width + 1)] = '#';
            else
                screen[i + j * (width + 1)] = ' ';
        }
        screen[width + j * (width + 1)] = '\n';
    }

    char* title = "American sniper";
    int title_length = strlen(title);
    int title_start_x = (width - title_length) / 2;
    int title_start_y = height / 2 - 4;

    for (i = 0; i < title_length; i++) {
        screen[title_start_x + i + title_start_y * (width + 1)] = title[i];
    }

    char* version = "-V0.1-";
    int version_length = strlen(version);
    int version_start_x = (width - version_length) / 2;
    int version_start_y = height / 2;

    for (i = 0; i < version_length; i++) {
        screen[version_start_x + i + version_start_y * (width + 1)] = version[i];
    }

    char* option1 = "1.GAME START";
    int option1_length = strlen(option1);
    int option1_start_x = (width - option1_length) / 2;
    int option1_start_y = height / 2 + 2;

    for (i = 0; i < option1_length; i++) {
        screen[option1_start_x + i + option1_start_y * (width + 1)] = option1[i];
    }

    char* option2 = "2.How TO Play";
    int option2_length = strlen(option2);
    int option2_start_x = (width - option2_length) / 2;
    int option2_start_y = height / 2 + 4;

    for (i = 0; i < option2_length; i++) {
        screen[option2_start_x + i + option2_start_y * (width + 1)] = option2[i];
    }

    char* option3 = "3.EXIT";
    int option3_length = strlen(option3);
    int option3_start_x = (width - option3_length) / 2;
    int option3_start_y = height / 2 + 5;

    for (i = 0; i < option3_length; i++) {
        screen[option3_start_x + i + option3_start_y * (width + 1)] = option3[i];
    }

    for (i = 0; i < width; i++) {
        if (screen[i + (option3_start_y + 1) * (width + 1)] == ' ')
            screen[i + (option3_start_y + 1) * (width + 1)] = '#';
    }

    printf("%s\n", screen);
}
