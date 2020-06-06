/*
744041
綾本　公平
*/

#include <stdio.h>
int main()
{
    int user, enemy;

    scanf("%d", &user);
    scanf("%d", &enemy);

    //printf("user: %d\n", user);
    //printf("enemy: %d\n", enemy);

    if (user == enemy){
        printf("even\n");
    }else if (user == 1 && enemy == 2){
        printf("win\n");
    }else if (user == 2 && enemy == 3){
        printf("win\n");
    }else if (user == 3 && enemy == 1){
        printf("win\n");
    }else{
        printf("lose\n");
    }

    return 0;
}