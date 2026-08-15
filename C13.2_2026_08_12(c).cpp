#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50    
#define MSG_LEN 60       

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], month_str[4], msg_str[MSG_LEN + 1], full_str[20];
    int day, i, j, num_remind = 0;
    int x = 0;

    for (;;) {
        int n = 0;
        if (num_remind == MAX_REMIND) {
            printf("--- No space left ---\n");
            break;
        }
        printf("Enter month,day and reminder: ");
        do
        {
            month_str[n++] = getchar();
            if (month_str[n - 1] == '/')
            {
                month_str[n - 1] = '\0';
                break;
            }
            if (n == 2)
            {
                if (month_str[0] == '0' && month_str[1] == '\n')
                {
                    x = -1;
                    break;
                }
            }
        } while (1);

        if (x == -1)
            break;

        scanf("%2d", &day);

        sprintf(day_str, "%2d", day);
        sprintf(full_str, "%s/%s", month_str, day_str);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(full_str, reminders[i]) < 0)
                break;

        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        strcpy(reminders[i], full_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }
    printf("\nMonth Day Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}