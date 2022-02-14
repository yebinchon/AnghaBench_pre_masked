
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ group_chat_object; } ;
struct TYPE_6__ {unsigned int num_chats; TYPE_2__* m; } ;
typedef TYPE_1__ Group_Chats ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;

void FUNC_3(Group_Chats *VAR_0)
{
    unsigned int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->num_chats; ++VAR_1) {
        FUNC_0(VAR_0, VAR_1);
    }

    FUNC_2(VAR_0->m, ((void*)0));
    VAR_0->m->group_chat_object = 0;
    FUNC_1(VAR_0);
}
