#include <stdio.h>
int main() {
    int a;
    int b;
    int m, n;
    int k = 0;
    scanf("%d", &a); 
    scanf("%d", &b);
    int i;
    for (i = 0; i < b; i++) {
        scanf("%d %d", &m,&n);
        k += m * n;

    }
    if (a == k) {
        printf("Yes");
    }
    else {
        printf("No");
    }
 
    return 0;
}
