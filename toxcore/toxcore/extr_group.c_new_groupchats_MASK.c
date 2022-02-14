
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fr_c; TYPE_1__* m; } ;
struct TYPE_7__ {TYPE_2__* group_chat_object; int fr_c; } ;
typedef TYPE_1__ Messenger ;
typedef TYPE_2__ Group_Chats ;


 TYPE_2__* FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;

Group_Chats *FUNC_2(Messenger *VAR_1)
{
    if (!VAR_1)
        return ((void*)0);

    Group_Chats *VAR_2 = FUNC_0(1, sizeof(Group_Chats));

    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_2->m = VAR_1;
    VAR_2->fr_c = VAR_1->fr_c;
    VAR_1->group_chat_object = VAR_2;
    FUNC_1(VAR_1, &VAR_0);

    return VAR_2;
}
