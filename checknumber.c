#include <stdio.h>

int change_state(int cs, int v) {

    if(cs == 0) {
        switch(v) {
            case '0':
                return 1;
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                return 2;
            default:
                return -1;
        }
    } else if(cs == 1) {
        return -1;
    } else if(cs == 2) {
        switch(v) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                return 2;
            default:
                return -1;
        }
    } else if(cs == -1) {
        return -1;
    }
    return -1;
}

int main() {
    int n = getchar();
    int state = 0;

    while(n != '\n' && state != -1) {
        // printf("%d", v == EOF);
        state = change_state(state, n);
        n = getchar();
    }
    
    
    printf("state : %d\n", state);
    if(state == 1 || state == 2) {
        printf("is valid");
    } else {
        printf("is not valid");
    }

    return 0;
}