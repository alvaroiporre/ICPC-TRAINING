
#include<cstdio>
#include<cstring>

char input[50];
int s, l;

int main() {

    for(;;) {
        scanf("%d %s", &s, input);
        if(s == 0) break;

        l = strlen(input);
        // top segment
        for(int i = 0; i < (s + 2) * l; i++) {
            switch(input[i / (s + 2)]) {
                case '1':case '4':
                    printf(" ");
                    break;
                case '2':case '3':case '5':case '6':case '7':
                case '8':case '9':case '0':
                    if(i % (s + 2) == 0) {
                        printf(" ");
                    } else if(i % (s + 2) == s + 1) {
                        printf(" ");
                    } else {
                        printf("-");
                    }
                    break;
            }
            if(i % (s + 2) == s + 1 && i / (s + 2) != l - 1)
                printf(" ");
        }
        printf("\n");
        for(int k = 0; k < s; k++) {
            for(int i = 0; i < l; i++) {
                switch(input[i]) {
                    case '2':case '3':case '7':case '1':
                        for(int j = 0; j < s + 2; j++)
                            if(j != s + 1)
                                printf(" ");
                            else
                                printf("|");
                        break;
                    case '5':case '6':
                        for(int j = 0; j < s + 2; j++)
                            if(j != 0)
                                printf(" ");
                            else
                                printf("|");
                        break;
                    case '4':case '8':case '9':case '0':
                        for(int j = 0; j < s + 2; j++)
                            if(j == 0 || j == s + 1)
                                printf("|");
                            else
                                printf(" ");
                        break;
                }
                if(i != l - 1)
                    printf(" ");
            }
            printf("\n");
        }
        // middle segment
        for(int i = 0; i < (s + 2) * l; i++) {
            switch(input[i / (s + 2)]) {
                case '1':case '7':case '0':
                    printf(" ");
                    break;
                case '2':case '3':case '4':case '5':case '6':
                case '8':case '9':
                    if(i % (s + 2) == 0) {
                        printf(" ");
                    } else if(i % (s + 2) == s + 1) {
                        printf(" ");
                    } else {
                        printf("-");
                    }
                    break;
            }
            if(i % (s + 2) == s + 1 && i / (s + 2) != l - 1)
                printf(" ");
        }
        printf("\n");
        for(int k = 0; k < s; k++) {
            for(int i = 0; i < l; i++) {
                switch(input[i]) {
                    case '3':case '4':case '5':case '7':
                    case '9':case '1':
                        for(int j = 0; j < s + 2; j++)
                            if(j != s + 1)
                                printf(" ");
                            else
                                printf("|");
                        break;
                    case '2':
                        for(int j = 0; j < s + 2; j++)
                            if(j != 0)
                                printf(" ");
                            else
                                printf("|");
                        break;
                    case '6':case '8':case '0':
                        for(int j = 0; j < s + 2; j++)
                            if(j == 0 || j == s + 1)
                                printf("|");
                            else
                                printf(" ");
                        break;
                }
                if(i != l - 1)
                    printf(" ");
            }
            printf("\n");
        }
        // final segment
        for(int i = 0; i < (s + 2) * l; i++) {
            switch(input[i / (s + 2)]) {
                case '1':case '4':case '7':
                    printf(" ");
                    break;
                case '2':case '3':case '5':case '6':
                case '8':case '9':case '0':
                    if(i % (s + 2) == 0) {
                        printf(" ");
                    } else if(i % (s + 2) == s + 1) {
                        printf(" ");
                    } else {
                        printf("-");
                    }
                    break;
            }
            if(i % (s + 2) == s + 1 && i / (s + 2) != l - 1)
                printf(" ");
        }
        printf("\n\n");
    }
}
