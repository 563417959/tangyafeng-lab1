#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int help();
int quit();

#define CMD_MAX_LEN  128
#define CMD_NUM      20
#define CMD_DESC     1024

static tDataNode head[] =
{
    {"help","This is a help cmd",help,&head[1]},
    {"version","menu program V2.0",NULL,&head[2]},
    {"quit","Quit from menu",quit,NULL}
};

int main()
{
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("please input a command ->");
        scanf("%s", cmd);
        tDataNode *p = FindCmd(head, cmd);
        if(p == NULL)
        {
            printf("This is a wrong command");
            continue;
        }
        printf("%s - %s\n", p->cmd, p->desc);
        if(p->handler != NULL)
        {
            p->handler();
        }
    }
}

int help()
{
    showAllCmd(head);
    return 0;
}
int quit()
{
    exit(0);
}
