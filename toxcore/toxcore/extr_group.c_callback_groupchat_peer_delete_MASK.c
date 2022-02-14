
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* peer_on_leave ) (void*,int,int,void*) ;} ;
typedef TYPE_1__ Group_c ;
typedef int Group_Chats ;


 TYPE_1__* FUNC_0 (int *,int) ;

int FUNC_1(Group_Chats *VAR_0, int VAR_1, void (*VAR_2)(void *, int, int, void *))
{
    Group_c *VAR_3 = FUNC_0(VAR_0, VAR_1);

    if (!VAR_3)
        return -1;

    VAR_3->peer_on_leave = VAR_2;
    return 0;
}
