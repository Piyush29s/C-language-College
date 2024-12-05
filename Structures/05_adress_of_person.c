#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main()
{
    struct address adds[5];

    printf("Enter the info of person 1: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter the info of person 2: ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter the info of person 3: ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter the info of person 4: ");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter the info of person 5: ");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printf("Enter the info of person 6: ");
    scanf("%d", &adds[5].houseNo);
    scanf("%d", &adds[5].block);
    scanf("%s", adds[5].city);
    scanf("%s", adds[5].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);
    printAdd(adds[5]);

    return 0;
}

void printAdd(struct address add)
{
    printf("\n adress is %d / %d / %s / %s \n", add.houseNo, add.block, add.city, add.state);
}
