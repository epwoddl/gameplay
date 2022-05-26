#include "gameplay.h"

void item_location(int world_item[][21], int difficulty)
{
    int i, x, y;

    for (i = 0; i < difficulty * 2; i++)
    {
        x = (rand() % ((difficulty * 10 - 2) / 2)) * 2;//�������� ���� ��ġ�� �һ�� �����ϱ� ���� �ּ� 2ĭ�� �ϳ��� ������
        y = rand() % (difficulty * 4 + 1);

        if (world_item[x][y] == 1)
            i--;
        else
            world_item[x][y] = 1;
    }

    for (x = 0; x < 49; x++)
    {
        for (y = 0; y < 21; y++)
        {
            if (world_item[x][y] == 1)
            {
                gotoxy(x + 1, y + 1);
                printf("��");
            }
        }
    }
}