/*
 * Program: Turn-Based Fighting Game
 * Author: Darsh Nanavati
 *
 * Description:
 * A console-based two-player fighting game inspired by classic
 * arcade fighting games. Players take turns attacking or defending,
 * while different weapons deal different amounts of damage.
 *
 * Note:
 * This is a fan-made console project and is not affiliated with
 * or endorsed by SNK.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void)
{
    int player1_hp = 100;
    int player2_hp = 100;

    int player1_weapon;
    int player2_weapon;
    int player1_action;
    int player2_action;

    int weapon_damage[4] = {15, 20, 25, 30};

    printf("========================================\n");
    printf("       TURN-BASED FIGHTING GAME\n");
    printf("========================================\n\n");

    Sleep(1000);

    printf("MATCH WILL START NOW IN\n");

    Sleep(1000);
    printf("3\n");

    Sleep(1000);
    printf("2\n");

    Sleep(1000);
    printf("1\n");

    Sleep(1000);
    printf("GO!\n");

    Sleep(500);

    srand((unsigned int)time(NULL));

    while (player1_hp > 0 && player2_hp > 0)
    {
        /* Player 1 Turn */
        printf("\n----------------------------------------\n");
        printf("PLAYER 1 HP: %d | PLAYER 2 HP: %d\n", player1_hp, player2_hp);
        printf("----------------------------------------\n");

        printf("\nPLAYER 1, CHOOSE AN ACTION:\n");
        printf("1. ATTACK\n");
        printf("2. DEFEND\n");
        printf("Choose: ");
        scanf("%d", &player1_action);

        if (player1_action == 1)
        {
            printf("\nPLAYER 1, CHOOSE A WEAPON:\n");
            printf("1. Master Blaster\n");
            printf("2. Grunt\n");
            printf("3. Hunter\n");
            printf("4. Polar Crusher\n");
            printf("Choose: ");
            scanf("%d", &player1_weapon);

            if (player1_weapon < 1 || player1_weapon > 4)
            {
                printf("Invalid weapon choice! Turn skipped.\n");
            }
            else
            {
                int damage = weapon_damage[player1_weapon - 1]
                           + (rand() % 6);

                Sleep(1000);

                printf("\nPLAYER 1 ATTACKS!\n");
                printf("Damage dealt: %d\n", damage);

                player2_hp -= damage;
            }
        }
        else if (player1_action == 2)
        {
            Sleep(1000);
            printf("\nPLAYER 1 DEFENDS!\n");
        }
        else
        {
            printf("Invalid action! Turn skipped.\n");
        }

        /* Check Player 2 HP */
        if (player2_hp <= 0)
        {
            player2_hp = 0;

            printf("\nPLAYER 1 WINS!\n");
            printf("FINAL SCORE: P1 HP = %d | P2 HP = %d\n",
                   player1_hp, player2_hp);

            break;
        }

        /* Player 2 Turn */
        printf("\n----------------------------------------\n");
        printf("PLAYER 1 HP: %d | PLAYER 2 HP: %d\n", player1_hp, player2_hp);
        printf("----------------------------------------\n");

        printf("\nPLAYER 2, CHOOSE AN ACTION:\n");
        printf("1. ATTACK\n");
        printf("2. DEFEND\n");
        printf("Choose: ");
        scanf("%d", &player2_action);

        if (player2_action == 1)
        {
            printf("\nPLAYER 2, CHOOSE A WEAPON:\n");
            printf("1. Magma Cannon\n");
            printf("2. Slicer\n");
            printf("3. Overlocker\n");
            printf("4. Frosty Fraggins\n");
            printf("Choose: ");
            scanf("%d", &player2_weapon);

            if (player2_weapon < 1 || player2_weapon > 4)
            {
                printf("Invalid weapon choice! Turn skipped.\n");
            }
            else
            {
                int damage = weapon_damage[player2_weapon - 1]
                           + (rand() % 6);

                Sleep(1000);

                printf("\nPLAYER 2 ATTACKS!\n");
                printf("Damage dealt: %d\n", damage);

                player1_hp -= damage;
            }
        }
        else if (player2_action == 2)
        {
            Sleep(1000);
            printf("\nPLAYER 2 DEFENDS!\n");
        }
        else
        {
            printf("Invalid action! Turn skipped.\n");
        }

        /* Check Player 1 HP */
        if (player1_hp <= 0)
        {
            player1_hp = 0;

            printf("\nPLAYER 2 WINS!\n");
            printf("FINAL SCORE: P1 HP = %d | P2 HP = %d\n",
                   player1_hp, player2_hp);

            break;
        }

        printf("\nCURRENT HEALTH:\n");
        printf("PLAYER 1 = %d | PLAYER 2 = %d\n",
               player1_hp, player2_hp);
    }

    printf("\nThank You for Playing!!\n");

    return 0;
}
