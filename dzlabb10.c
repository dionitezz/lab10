#include <stdio.h>
#include <locale.h>

float calculateArea(int top, int bot, int height) {
    return (top + bot) * height / 2.0f;
}

void printOpred() {
    printf("Трапеция - это четырёхугольник, у которого две стороны параллельны, а две другие - нет.\n");
    printf("Параллельные стороны называются основаниями, а непараллельные - боковыми сторонами.\n");
}

void drawFigure(char symbol, int top, int bot, int height) {
    printf("\nРисунок трапеции:\n\n");
    for (int i = 0; i < height; i++) {
        int current_width = top + (bot - top) * i / height;
        int spaces = (bot - current_width) / 2;

        for (int j = 0; j < spaces; j++)
            printf(" ");

        for (int j = 0; j < current_width; j++)
            printf("%c", symbol);

        printf("\n");
    }
}

int main() {
    setlocale(LC_ALL, "");

    char simvol;
    int verh, niz, h;
    int choice;

    printf("Символ: ");
    scanf(" %c", &simvol);

    printf("Верхнее основание: ");
    scanf("%d", &verh);

    printf("Нижнее основание: ");
    scanf("%d", &niz);

    printf("Высота: ");
    scanf("%d", &h);

    while (1) {
        printf("\nМеню операций:\n");
        printf("1 - Рассчитать площадь\n");
        printf("2 - Вывести определение фигуры\n");
        printf("3 - Нарисовать фигуру\n");
        printf("4 - Выход\n");
        printf("Выберите операцию: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Площадь трапеции: %.2f\n", calculateArea(verh, niz, h));
            break;

        case 2:
            printOpred();
            break;

        case 3:
            drawFigure(simvol, verh, niz, h);
            break;

        case 4:
            printf("Выход из программы.\n");
            return 0;

        default:
            printf("Неверный выбор! Попробуйте снова.\n");
        }
    }

    return 0;
}