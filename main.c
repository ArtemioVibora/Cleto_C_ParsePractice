#include <stdio.h>

//Program that takes individual words
//Would count number of words in a file
//And then once that is done it would count the number of letters within each word
//would count the number of numbers in that file
//would count the number of special characters

//Test
int countWords(char string[]) {
    int numWords = 1;

    if (string[0] == '\0') {
        numWords = 0;
    }
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' && string[i + 1] != ' ') {
            numWords++;
        }
    }

    return numWords;
}

void runProgram() {
    char string[] = "Hello World! Friend";
    char string2[] = "";
    printf("the number of words is %d\n", countWords(string));
    printf("the number of words is %d\n", countWords(string2));
}


int main(void) {
    runProgram();
}

