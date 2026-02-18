#include <stdio.h>

int main() {
    int path;
    if (scanf("%d", &path) != 1) return 0;

    if (path == 1) {
        printf("Player chooses the Left path.\n");
        int action;
        if (scanf("%d", &action) != 1) return 0;

        if (action == 1) {
            printf("Poor choice, Game Over!\n");
            return 0;
        } else if (action == 2) {
            printf("Player found a bridge.\n");
            int bridge;
            if (scanf("%d", &bridge) != 1) return 0;

            if (bridge == 1) {
                printf("Player crosses the bridge safely.\n");
                int chest;
                if (scanf("%d", &chest) != 1) return 0;

                if (chest == 1) {
                    printf("All that glitters is not gold, Game Over!\n");
                } else if (chest == 2) {
                    printf("All your efforts were for nothing, Game Over!\n");
                } else if (chest == 3) {
                    printf("Congratulations!! You won the treasure.\n");
                }
                return 0;
            } else if (bridge == 2) {
                printf("Poor luck, Game Over!\n");
                return 0;
            }
        }
    } else if (path == 2) {
        printf("Player chooses the Middle path.\n");
        int answer;
        if (scanf("%d", &answer) != 1) return 0;

        if (answer == 582) {
            printf("Player solved the puzzle.\n");
            int chest;
            if (scanf("%d", &chest) != 1) return 0;

            if (chest == 1) {
                printf("All that glitters is not gold, Game Over!\n");
            } else if (chest == 2) {
                printf("All your efforts were for nothing, Game Over!\n");
            } else if (chest == 3) {
                printf("Congratulations!! You won the treasure.\n");
            }
            return 0;
        } else {
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    } else if (path == 3) {
        printf("Player chooses the Right path.\n");
        int answer;
        if (scanf("%d", &answer) != 1) return 0;

        if (answer == 30) {
            printf("Player solved the puzzle.\n");
            int chest;
            if (scanf("%d", &chest) != 1) return 0;

            if (chest == 1) {
                printf("All that glitters is not gold, Game Over!\n");
            } else if (chest == 2) {
                printf("All your efforts were for nothing, Game Over!\n");
            } else if (chest == 3) {
                printf("Congratulations!! You won the treasure.\n");
            }
            return 0;
        } else {
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    }

    return 0;
}