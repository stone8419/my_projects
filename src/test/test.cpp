#include "test.h"
#include "namespace.h"
#include <unistd.h>
/*
 * @Description: 
 * @Author: stone
 * @Date: 2020-01-19 16:42:13
 * @LastEditTime : 2020-01-20 11:41:28
 * @LastEditors  : stone
 */
#include "game1.h"
#include "game2.h"

int map[9][11] = {
    { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 5, 0, 0, 1, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 4, 4, 4, 4, 4, 0, 1, 0 },
    { 0, 1, 0, 4, 0, 4, 0, 4, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 4, 0, 0, 1 },
    { 1, 0, 0, 1, 1, 1, 1, 0, 4, 0, 1 },
    { 1, 0, 3, 3, 3, 3, 3, 1, 0, 0, 1 },
    { 1, 1, 3, 3, 3, 3, 3, 0, 0, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 }
};
void DrawMap()
{
    for (size_t i = 0; i < 9; i++) {
        for (size_t j = 0; j < 11; j++) {
            switch (map[i][j]) {
            case 0:
                printf(" ⬜ ");
                break;
            case 1:
                printf(" ⏹ ");
                break;
            case 3:
                printf(" 🌲 ");
                break;
            case 4:
                printf(" 🍞 ");
                break;
            case 5:
                printf(" ∮ ");
                break;
            case 7:
                printf(" ✅ ");
                break;
            case 8:
                printf(" ∮ ");
                break;
            default:
                break;
            }
        }
        printf("\n");
    }
    return;
}
void PlayGame()
{
    int r = 0, c = 0;
    for (size_t i = 0; i < 9; i++) {
        for (size_t j = j; j < 11; j++) {
            if (map[i][j] == 5 || map[i][j] == 8) {
                r = i;
                c = j;
            }
        }
    }

    char* ch;
    ch = getpass("");
    switch (*ch) {
    case 'w':
        if (map[r - 1][c] == 0) {
            map[r - 1][c] = 5;
            if (map[r][c] == 5) {
                map[r][c] = 0;
            } else {
                map[r][c] = 3;
            }
        }
        break;

    default:
        break;
    }
}
void test()
{
    while (1) {
        PlayGame();
        DrawMap();
    }
    return;
}