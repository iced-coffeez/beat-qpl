#include <beatqpl.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

void executeCMD(const char* command, const char* parameters) {

}

char* paramCMD[] = {
    "output",
    "setcolor"
};

void output(char* text) {
    print(text);
}

void setcolor(uint8_t foreground, uint8_t background) {

}

void interperet(const char* prgm) {
    char* start;
    char* end;

    if (isFunction(prgm)) {
        
    }
}

bool isFunction(const char* line) {
    char* lne = line;
    bool isFunc;

    while (*lne && *lne != '(') {
        lne++;
    }
    if (!*lne) {
        isFunc = false;
    } else {
        isFunc = true;
    }

    lne = line;

    while (*lne && *lne != ')') {
        lne++;
    }
    if (!*lne) {
        isFunc = false;
    } else {
        isFunc = true;
    }

    return isFunc;
}

void parseFunc(const char* prgm) {
    char* start = prgm;

    while (*start && *start != '(') {
        start++;
    }
    if (!*start) {
        return;
    }

    char* close = start + 1;

    while (*close && *close != ')') {
        close++;
    }
    if (!*close) {
        return;
    }

    int len = close - start;

    char name[32];

    for (int i = 0; i < len && i < 31; i++)
        name[i] = close[i];
    name[len] = '\0';
}