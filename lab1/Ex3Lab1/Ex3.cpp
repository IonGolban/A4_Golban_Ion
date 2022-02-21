#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

void sort(char a[][20],int n) {
    char temp[20];
    int i, j, u;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strlen(a[j]) > strlen(a[j + 1]))
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
            else if (strlen(a[j]) == strlen(a[j + 1]))
            {
                if (strcmp(a[j], a[j + 1]) > 0)
                {
                    strcpy(temp, a[j]);
                    strcpy(a[j], a[j + 1]);
                    strcpy(a[j + 1], temp);
                }
            }
        }
    }
    for (u = 0; u < n; u++) {
        printf("%s \n", a[u]);
    }
}


int main() {
    char str[20];
    char prop[20][20];
    const char s[2] = " ";
    scanf("%[^\n]", str);
    char* token;
    token = strtok(str, s);
    int counter = 0;

    
    while (token != NULL) {
        strcpy(prop[counter], token);

        token = strtok(NULL, s);
        counter++;
    }
    sort(prop, counter);

    return(0);
}