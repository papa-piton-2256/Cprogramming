#include <stdio.h>

int tam(int x) {
    int cycle = 1;

    while (x != 1) {
        if (x % 2 == 0) { 
            x = x / 2;
        } else { 
            x = x * 3 + 1;
        }
        ++cycle;
    }
    return cycle;
}

int maxtamBetween(int a, int b) {
    if (a > b) { 
        int temp = a;
        a = b;
        b = temp;
    }
    int maxCycle = 0;
    
    for (; a <= b; a++) {
        int thistam = tam(a);
        if (thistam > maxCycle) {
            maxCycle = thistam;
        }
    }
    return maxCycle;
}

int main() {
    int a, b; 
    
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d %d %d\n", a, b, maxtamBetween(a, b));
    }
    return 0;
}
