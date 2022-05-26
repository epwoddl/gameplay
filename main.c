#include "gameplay.h"

int main(void)
{
    int difficulty, x, y, item[49][21] = { {0} }, map_array[51][23] = { {0} };

    srand((unsigned int)time(NULL));
    x = 1;
    y = 1;

    scanf("%d", &difficulty);
    system("cls");

    map(difficulty, map_array);
    item_location(item, difficulty);

    while (1)
    {
        moving(difficulty, map_array, &x, &y);
        item_get();
    }

    return 0;
}