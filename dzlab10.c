#include <stdio.h>
#include <locale.h>

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
            printf("Площадь трапеции: %.2f\n", (verh + niz) * h / 2.0);
            break;

        case 2:
            printf("Трапеция - это четырёхугольник, у которого две стороны параллельны, а две другие - нет.\n");
            printf("Параллельные стороны называются основаниями, а непараллельные - боковыми сторонами.\n");
            break;

        case 3:
            printf("\nРисунок трапеции:\n\n");
            for (int i = 0; i < h; i++) {
                int current_width = verh + (niz - verh) * i / h;
                int spaces = (niz - current_width) / 2;

                for (int j = 0; j < spaces; j++)
                    printf(" ");

                for (int j = 0; j < current_width; j++)
                    printf("%c", simvol);

                printf("\n");
            }
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