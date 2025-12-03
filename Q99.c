#include <stdio.h>

int main()
{
    char date[11], monthStr[4];
    int m1, m2, month;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    m1 = date[3] - '0';
    m2 = date[4] - '0';
    month = m1 * 10 + m2;

    if (month == 1)
    {
        monthStr[0] = 'J';
        monthStr[1] = 'a';
        monthStr[2] = 'n';
    }
    else if (month == 2)
    {
        monthStr[0] = 'F';
        monthStr[1] = 'e';
        monthStr[2] = 'b';
    }
    else if (month == 3)
    {
        monthStr[0] = 'M';
        monthStr[1] = 'a';
        monthStr[2] = 'r';
    }
    else if (month == 4)
    {
        monthStr[0] = 'A';
        monthStr[1] = 'p';
        monthStr[2] = 'r';
    }
    else if (month == 5)
    {
        monthStr[0] = 'M';
        monthStr[1] = 'a';
        monthStr[2] = 'y';
    }
    else if (month == 6)
    {
        monthStr[0] = 'J';
        monthStr[1] = 'u';
        monthStr[2] = 'n';
    }
    else if (month == 7)
    {
        monthStr[0] = 'J';
        monthStr[1] = 'u';
        monthStr[2] = 'l';
    }
    else if (month == 8)
    {
        monthStr[0] = 'A';
        monthStr[1] = 'u';
        monthStr[2] = 'g';
    }
    else if (month == 9)
    {
        monthStr[0] = 'S';
        monthStr[1] = 'e';
        monthStr[2] = 'p';
    }
    else if (month == 10)
    {
        monthStr[0] = 'O';
        monthStr[1] = 'c';
        monthStr[2] = 't';
    }
    else if (month == 11)
    {
        monthStr[0] = 'N';
        monthStr[1] = 'o';
        monthStr[2] = 'v';
    }
    else
    {
        monthStr[0] = 'D';
        monthStr[1] = 'e';
        monthStr[2] = 'c';
    }

    monthStr[3] = '\0';

    printf("%c%c-%s-%c%c%c%c\n", date[0], date[1], monthStr, date[6], date[7], date[8], date[9]);

    return 0;
}
