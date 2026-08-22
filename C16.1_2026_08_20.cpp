#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    struct dialog_code {
        char country[20];
        int code;
    };

    struct dialog_code c;
    struct dialog_code country_codes[] = {
        {"Argentina", 54}, {"Bangladesh", 880},
        {"Brazil", 55}, {"Burma (Myanmar)", 95},
        {"China", 86}, {"Colombia", 57},
        {"Congo, Dem. Rep. of", 243}, {"Egypt", 20},
        {"Ethiopia", 251}, {"France", 33},
        {"Germany", 49}, {"India", 91},
        {"Indonesia", 62}, {"Iran", 98},
        {"Italy", 39}, {"Japan", 81},
        {"Mexico", 52}, {"Nigeria", 234},
        {"Pakistan", 92}, {"Philippines", 63},
        {"Poland", 48}, {"Russia", 7},
        {"South Africa", 27}, {"Korea", 82},
        {"Spain", 34}, {"Sudan", 249},
        {"Thailand", 66}, {"Turkey", 90},
        {"Ukraine", 380}, {"United Kingdom", 44},
        {"United States", 1}, {"Vietnam", 84}
    };

    printf("Enter the country and code: ");
    scanf("%s %d", c.country, &c.code);

    for (int i = 0;i < 32;i++)
    {
        if (strcmp(c.country, country_codes[i].country) == 0 && c.code == country_codes[i].code)
        {
            printf("%s %d\n", c.country, c.code);
            break;
        }
        if (i == 31)
            printf("Error\n");
    }

    return 0;
}