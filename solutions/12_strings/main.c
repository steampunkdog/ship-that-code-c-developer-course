#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int size = 0;
    scanf("%d", &size);
    getchar(); // to consume \n left after scanf

    char **input_lines = malloc(size * sizeof(char*));
    if (input_lines == NULL) {
        return 1;
    }    

    char buff[100] = {0};
    for (int i = 0; i < size; i++) {
        // \n included
        fgets(buff, sizeof(buff), stdin);
        char *line = malloc(strlen(buff) + 1);
        if (line == NULL) {
            return 1;
        }
        strcpy(line, buff);
        input_lines[i] = line;
    }

    FILE *outf = fopen("tmp/clines.txt", "w");
    if (outf == NULL) {
        perror("Error: ");
        return 1;
    }
    for (int i = 0; i < size; i++) {
        fputs(input_lines[i], outf);
    }
    fclose(outf);

    FILE *inf = fopen("tmp/clines.txt", "r");
    if (inf == NULL) {
        perror("Error: ");
        return 1;
    }

    int counter = 0;
    while (fgets(buff, sizeof(buff), inf) != NULL) {
        counter++;
    }
    
    printf("lines: %d\n", counter);

    for (int i = 0; i < size; i++) {
        free(input_lines[i]);
    }
    free(input_lines);
    return 0;
}
