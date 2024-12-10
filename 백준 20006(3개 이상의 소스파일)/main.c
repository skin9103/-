#include <stdio.h>
#include "player.h"
#include "room.h"
int main() {
    int p, m;
    scanf_s("%d %d", &p, &m);
    input_players(p);
    assign_rooms(p, m);
    print_rooms(m);
    return 0;
}
