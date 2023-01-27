#include <stdio.h>
#include <unistd.h>

static const char* prompt = "|/-\\";

int main() {
    int idx = 0;
    while(1) {
        printf("%c", prompt[idx]);
        fflush(stdout);
        usleep(5e5); // 0.5 secs
        idx = (idx+1) % 4;
        printf("\b");
    }

    return 0;
}