#include "gameplay.h"

void moving(int difficulty, int map[][23], int* x, int* y)
{
    int ch;

    gotoxy(*x, *y);
    printf("��\b\b");

    ch = _getch();

    if (ch == 224)
    {
        ch = _getch();
        switch (ch)
        {
        case 72:
            if (map[*x][(*y) - 1] == 0)
            {
                printf("  ");
                (*y)--;
            }
            break;

        case 80:
            if (map[*x][(*y) + 1] == 0)
            {
                printf("  ");
                (*y)++;
            }
            break;

        case 75:
            if (map[(*x) - 2][*y] == 0)
            {
                printf("  ");
                (*x)--;
                (*x)--;
            }
            break;

        case 77:
            if (map[(*x) + 3][*y] == 0)
            {
                printf("  ");
                (*x)++;
                (*x)++;
            }
            break;
        }
    }
}
//�и��� ���� ��ġ�� ���� x��ǥ 2�� �����̰� & case 77���� +2�� �ϸ� �÷��̾ 2ĭ¥���� ���� ���ֹ����� +3����