#include <stdio.h>
#include "player.h"
int level[300];
char name[300][17];
void input_players(int p) {
    for (int i=0;i<p;i++) {
        scanf_s("%d %s", &level[i], name[i], 17);
    }
}
